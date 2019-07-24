import { Fragment } from "react";
import React from "react";
import { connect } from "react-redux";
import HtmlFileReader from "../../../../common/htmlFileReader";
import IProjectActions, * as projectActions from "../../../../redux/actions/projectActions";
import { bindActionCreators } from "redux";
import {
    AssetState, AssetType, EditorMode, IApplicationState,
    IAppSettings, IAsset, IAssetMetadata, IProject, IRegion,
    ISize, ITag, IAdditionalPageSettings, AppError, ErrorCode, IBoundingBox,
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
    size? : ISize;
    top: string;
    right: string;
    bottom: string;
    left: string;
}

function mapStateToProps(state: IApplicationState) {
    return {
        recentProjects: state.recentProjects,
        project: state.currentProject,
        appSettings: state.appSettings,
    };
}

function mapDispatchToProps(dispatch) {
    return {
        actions: bindActionCreators(projectActions, dispatch),
    };
}

@connect(mapStateToProps, mapDispatchToProps)
export default class CanvasDisplay extends React.Component<ICanvasDisplayProps, ICanvasDisplayState> {
    private canvasDisplayZone: React.RefObject<HTMLDivElement> = React.createRef();

    state = {
        currentMetadata: null,
        selectedAsset: this.props.selectedAsset,
        assets: this.props.assets,
        nextTime: 0,
        size : {width:0, height: 0} as ISize,
        top: "0px",
        right: "0px",
        bottom: "0px",
        left: "0px"
    }


    public componentDidMount = () => {
        var canvas = document.getElementById("canvasDisplay") as HTMLCanvasElement;
        var ctx = canvas.getContext("2d");
        ctx.rect(20, 20, 150, 100);
        ctx.stroke();

        if(this.props.assets) {
            const size = this.props.assets[0].size ? this.props.assets[0].size : this.state.size;
            this.setState({size: size});
            console.log("size:", size);
        }

        const refConvas = document.getElementById("ct-zone") as HTMLCanvasElement;
        const styles = window.getComputedStyle(refConvas);
        const width = styles.width;
        console.log("width", width);
    }

    public componentWillUnmount() {
    }

    public componentDidUpdate = async (prevProps: Readonly<ICanvasDisplayProps>, prevState: Readonly<ICanvasDisplayState>) => {
        console.log("canvas time", this.props.currentTime);
        console.log("current Metadata", this.state.currentMetadata);

        const refConvas = document.getElementById("ct-zone") as HTMLCanvasElement;
        const styles = window.getComputedStyle(refConvas);

        const canvas = document.getElementById("canvasDisplay") as HTMLCanvasElement;
        canvas.style.top = `${styles.top}px`;
        canvas.style.right = `${styles.right}px`;
        canvas.style.bottom = `${styles.bottom}px`;
        canvas.style.left = `${styles.left}px`;
        canvas.style.width = `${styles.width}px`;
        canvas.style.height = `${styles.height}px`;
        this.setState({top: styles.top, right: styles.right, bottom: styles.bottom, left: styles.left});

        const currentTime = this.props.currentTime;
        const nextFrame = this.props.childAssets.find((asset) => asset.state === AssetState.Tagged && asset.timestamp > currentTime);
        if(nextFrame) {
            const nextTime = nextFrame.timestamp;
            console.log("nextFrame Time:", nextTime);

            if(currentTime > this.state.nextTime || this.state.nextTime === 0) {
                const assetMetadata = await this.props.actions.loadAssetMetadata(this.props.project, nextFrame);
                this.setState({currentMetadata: assetMetadata, nextTime: nextTime});
                console.log("nextFrame Metadata:", assetMetadata);
            }

        }
    }

    public render = () => {
        return (
            <Fragment>
                <div id="ct-displayzone"  className="canvas-enabled" onClick={(e) => e.stopPropagation()}>
                    <div id="selection-zone">
                        <div id="editor-zone" className="full-size">
                            <canvas id="canvasDisplay" width={this.state.size.width} height={this.state.size.height}></canvas>
                        </div>
                    </div>
                </div>
            </Fragment>
        );
    }

}
