import argparse
import cv2
from object_detection import object_detector
import imutils
import os
from config import FRAME_WIDE
import pickle

ap = argparse.ArgumentParser()
ap.add_argument("-v", "--video", type=str,
    help="path to input video file")

ap.add_argument("-o", "--output", type=str, default="detection_result",
    help="OpenCV object tracker type")


def video_od(video_pth, out_dir):

    import pdb
    pdb.set_trace()
    sec = 0
    fps = 15
    frame_rate = 1 / fps
    vs = cv2.VideoCapture(video_pth)
    vs.set(cv2.CAP_PROP_FPS, 15)
    fps = vs.get(cv2.CAP_PROP_FPS)
    print("fps: {}".format(fps))
    if not os.path.exists(out_dir):
        os.makedirs(out_dir)
    while True:
        # grab the current frame, then handle if we are using a
        # VideoStream or VideoCapture object
        vs.set(cv2.CAP_PROP_POS_MSEC, sec * 1000)
        sec += frame_rate
        frame = vs.read()
        frame = frame[1]
        if frame is None:
            break

        frame = imutils.resize(frame, width=FRAME_WIDE)
        od_bboxes = object_detector("detect-body.onnx").detect(frame)
        pickle.dump(od_bboxes, open(os.path.join(out_dir, str(round(sec, 2))+'.p'), 'wb'))


if __name__ == '__main__':
    args = vars(ap.parse_args())
    video_name = os.path.splitext(os.path.basename(args["video"]))[0]

    video_od(args["video"], os.path.join(args['output'], video_name))
