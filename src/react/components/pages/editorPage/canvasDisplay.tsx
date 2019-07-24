import { Fragment } from "react";
import React from "react";
import { connect } from "react-redux";
import HtmlFileReader from "../../../../common/htmlFileReader";
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
import { ContentSource } from "../../common/assetPreview/assetPreview";
import { createContentBoundingBox } from "../../../../common/layout";

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

    state = {
        currentMetadata: null,
        selectedAsset: this.props.selectedAsset,
        assets: this.props.assets,
        nextTime: 0,
        size: { width: 0, height: 0 } as ISize
    };

    public componentDidMount = () => {
        var canvas = document.getElementById(
            "canvasDisplay"
        ) as HTMLCanvasElement;
        var ctx = canvas.getContext("2d");
        // ctx.rect(20, 20, 150, 100);
        // ctx.stroke();

        if (this.props.assets) {
            const size = this.props.assets[0].size
                ? this.props.assets[0].size
                : this.state.size;
            this.setState({ size: size });
            console.log("size:", size);
        }

        const refConvas = document.getElementById(
            "ct-zone"
        ) as HTMLCanvasElement;
        const styles = window.getComputedStyle(refConvas);
        const width = styles.width;
        console.log("width", width);
    };

    public componentWillUnmount() {}

    public componentDidUpdate = async (
        prevProps: Readonly<ICanvasDisplayProps>,
        prevState: Readonly<ICanvasDisplayState>
    ) => {
        console.log("canvas time", this.props.currentTime);
        console.log("current Metadata", this.state.currentMetadata);

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

            // div.style.width = `${refDiv.offsetWidth}px`;
            // div.style.height = `${refDiv.offsetHeight}px`;
        }

        const currentTime = this.props.currentTime;
        const nextFrame = this.props.childAssets.find(
            asset =>
                asset.state === AssetState.Tagged &&
                asset.timestamp > currentTime
        );
        if (nextFrame) {
            const nextTime = nextFrame.timestamp;
            console.log("nextFrame Time:", nextTime);

            if (
                currentTime > this.state.nextTime ||
                this.state.nextTime === 0
            ) {
                const assetMetadata = await this.props.actions.loadAssetMetadata(
                    this.props.project,
                    nextFrame
                );
                this.setState({
                    currentMetadata: assetMetadata,
                    nextTime: nextTime
                });
                console.log("nextFrame Metadata:", assetMetadata);
            }
        }

        if (this.state.currentMetadata) {
            console.log("currentMetadata", this.state.currentMetadata);
            const canvas = document.getElementById(
                "canvasDisplay"
            ) as HTMLCanvasElement;
            var ctx = canvas.getContext("2d");
            const regions: IRegion[] = this.state.currentMetadata.regions;
            for (let i = 0; i < regions.length; i++) {
                const boundingBox: IBoundingBox = regions[i].boundingBox;
                const points: IPoint[] = regions[i].points;

                ctx.fillStyle = "#FF0000";
                // ctx.fillRect(20, 20, 150, 100);

                ctx.rect(
                    boundingBox.left,
                    boundingBox.top,
                    boundingBox.width,
                    boundingBox.height
                );
                ctx.stroke();
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
