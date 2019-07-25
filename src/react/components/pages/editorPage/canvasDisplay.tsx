import { Fragment } from "react";
import React from "react";
import { connect } from "react-redux";
import IProjectActions, * as projectActions from "../../../../redux/actions/projectActions";
import { bindActionCreators } from "redux";
import {
    AssetState,
    AssetType,
    EditorMode,
    IApplicationState,
    IAppSettings,
    IAsset,
    IAssetMetadata,
    IProject,
    IRegion,
    ISize,
    ITag,
    IAdditionalPageSettings,
    AppError,
    ErrorCode,
    IBoundingBox,
    IPoint
} from "../../../../models/applicationState";
import CanvasHelpers from "./canvasHelpers";
import { Editor } from "vott-ct/lib/js/CanvasTools/CanvasTools.Editor";
import { CanvasTools } from "vott-ct";

export interface ICanvasDisplayProps extends React.Props<CanvasDisplay> {
    selectedAsset?: IAssetMetadata;
    assets?: IAsset[];
    actions?: IProjectActions;
    project?: IProject;
    currentTime?: number;
    childAssets?: IAsset[];
}

export interface ICanvasDisplayState {
    currentMetadata?: IAssetMetadata;
    selectedAsset?: IAssetMetadata;
    assets?: IAsset[];
    nextTime?: number;
    size?: ISize;
}

function mapStateToProps(state: IApplicationState) {
    return {
        recentProjects: state.recentProjects,
        project: state.currentProject,
        appSettings: state.appSettings
    };
}

function mapDispatchToProps(dispatch) {
    return {
        actions: bindActionCreators(projectActions, dispatch)
    };
}

@connect(
    mapStateToProps,
    mapDispatchToProps
)
export default class CanvasDisplay extends React.Component<
    ICanvasDisplayProps,
    ICanvasDisplayState
> {
    private canvasDisplayZone: React.RefObject<
        HTMLDivElement
    > = React.createRef();

    private editorDisplayZone: React.RefObject<
        HTMLDivElement
    > = React.createRef();
    public editor: Editor;



    state = {
        currentMetadata: null,
        selectedAsset: this.props.selectedAsset,
        assets: this.props.assets,
        nextTime: 0,
        size: { width: 0, height: 0 } as ISize
    };

    public componentDidMount = () => {
        if (this.props.assets) {
            const size = this.props.assets[0].size
                ? this.props.assets[0].size
                : this.state.size;
            this.setState({ size: size });
        }

        // const sz = document.getElementById("editor-displayzone") as HTMLDivElement;
        // this.editor = new CanvasTools.Editor(sz);
        // this.editor.autoResize = false;


        // this.editor.onSelectionEnd = this.onSelectionEnd;
        // this.editor.onRegionMoveEnd = this.onRegionMoveEnd;
        // this.editor.onRegionDelete = this.onRegionDelete;
        // this.editor.onRegionSelected = this.onRegionSelected;
        // this.editor.AS.setSelectionMode({ mode: this.props.selectionMode });
    };

    public componentWillUnmount() {}

    public componentDidUpdate = async (
        prevProps: Readonly<ICanvasDisplayProps>,
        prevState: Readonly<ICanvasDisplayState>
    ) => {

        // const canvasBuiltin = this.editorDisplayZone.current.querySelector("canvas");
        // if(canvasBuiltin) {
        //     canvasBuiltin.setAttribute("id", "canvasDisplay");
        // }



        const refConvas = document.getElementById(
            "ct-zone"
        ) as HTMLCanvasElement;
        const canvasStyle = window.getComputedStyle(refConvas);

        const canvas = this.canvasDisplayZone.current;
        if (canvas) {
            canvas.style.top = canvasStyle.top;
            canvas.style.left = canvasStyle.left;
            canvas.style.width = canvasStyle.width;
            canvas.style.height = canvasStyle.height;


            // const width = canvasStyle.width;
            // const height = canvasStyle.height;

            // this.editor.resize(+width.substring(0, width.length - 2), +height.substring(0, height.length - 2));
        }

        const refDiv = document.getElementById("editor-zone") as HTMLDivElement;
        const divStyle = window.getComputedStyle(refDiv);

        const div = this.editorDisplayZone.current;
        if (div) {
            div.style.top = divStyle.top;
            div.style.left = divStyle.left;
            div.style.width = divStyle.width;
            div.style.height = divStyle.height;
            div.style.padding = divStyle.padding;
        }

        const currentTime = this.props.currentTime;
        const nextFrame = this.props.childAssets.find(
            asset =>
                asset.timestamp > currentTime
        );
        if (nextFrame) {
            const nextTime = nextFrame.timestamp;

            if (
                currentTime > this.state.nextTime ||
                this.state.nextTime === 0 || this.state.nextTime !== nextTime
            ) {
                const assetMetadata = await this.props.actions.loadAssetMetadata(
                    this.props.project,
                    nextFrame
                );
                this.setState({
                    currentMetadata: assetMetadata,
                    nextTime: nextTime
                });
            }
        }

        if (this.state.currentMetadata) {
            const canvas = document.getElementById(
                "canvasDisplay"
            ) as HTMLCanvasElement;
            var ctx = canvas.getContext("2d");
            ctx.clearRect(0, 0, this.state.size.width, this.state.size.height);
            var w = canvas.width;
            canvas.width = 1;
            canvas.width = w;

            const regions: IRegion[] = this.state.currentMetadata.regions;


            // this.state.currentMetadata.regions.forEach((region: IRegion) => {
            //     const loadedRegionData = CanvasHelpers.getRegionData(region);
            //     this.editor.RM.addRegion(
            //         region.id,
            //         this.editor.scaleRegionToFrameSize(
            //             loadedRegionData,
            //             this.state.currentMetadata.asset.size.width,
            //             this.state.currentMetadata.asset.size.height,
            //         ),
            //         CanvasHelpers.getTagsDescriptor(this.props.project.tags, region));
            // });




            for (let i = 0; i < regions.length; i++) {
                const boundingBox: IBoundingBox = regions[i].boundingBox;
                const points: IPoint[] = regions[i].points;
                const tag = CanvasHelpers.getTagsDescriptor(this.props.project.tags, regions[i]);
                const color = tag.primary.color;

                ctx.beginPath();
                ctx.globalAlpha = 1;
                ctx.strokeStyle  = color;
                ctx.lineWidth = 5;
                ctx.rect(
                    boundingBox.left,
                    boundingBox.top,
                    boundingBox.width,
                    boundingBox.height
                );
                ctx.stroke();
                ctx.closePath();

                ctx.beginPath();
                ctx.globalAlpha = 0.25;
                ctx.fillStyle  = color;
                ctx.fillRect(
                    boundingBox.left,
                    boundingBox.top,
                    boundingBox.width,
                    boundingBox.height)
                ; 
                ctx.stroke();
                ctx.closePath();
            }
        }
    };

    public render = () => {
        return (
            <Fragment>
                <div
                    id="ct-displayzone"
                    ref={this.canvasDisplayZone}
                    className="canvas-enabled"
                    onClick={e => e.stopPropagation()}
                >
                    <div id="selection-zone">
                        <div
                            id="editor-displayzone"
                            ref={this.editorDisplayZone}
                            className="full-size"
                        >
                            <canvas
                                id="canvasDisplay"
                                width={this.state.size.width}
                                height={this.state.size.height}
                            />
                        </div>
                    </div>
                </div>
            </Fragment>
        );
    };
}
