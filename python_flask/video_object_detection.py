import argparse
import cv2
from object_detection import object_detector
import imutils
import os
from config import FRAME_WIDE
import pickle
import time

ap = argparse.ArgumentParser()
ap.add_argument("-v", "--video", type=str,
    help="path to input video file")

ap.add_argument("-o", "--output", type=str, default="output",
    help="OpenCV object tracker type")


def video_od(video_pth, out_dir):
    sec = 0
    fps = 15
    frame_rate = 1 / fps
    vs = cv2.VideoCapture(video_pth)
    vs.set(cv2.CAP_PROP_FPS, 15)
    fps = vs.get(cv2.CAP_PROP_FPS)
    print("fps: {}".format(fps))
    detector = object_detector("detect-body.onnx")
    if not os.path.exists(out_dir):
        os.makedirs(out_dir)

    start_time = time.time()
    while True:
        # grab the current frame, then handle if we are using a
        # VideoStream or VideoCapture object
        vs.set(cv2.CAP_PROP_POS_MSEC, sec * 1000)

        frame = vs.read()
        frame = frame[1]
        if frame is None:
            break
        frame = imutils.resize(frame, width=FRAME_WIDE)
        od_bboxes = detector.detect(frame)
        pickle.dump(od_bboxes, open(os.path.join(out_dir, '%.2f' % sec + '.p'), 'wb'))
        sec += frame_rate
    end_time = time.time()
    print("Time cost {} with sec {}".format(end_time-start_time, sec))

if __name__ == '__main__':
    args = vars(ap.parse_args())
    video_name = os.path.splitext(os.path.basename(args["video"]))[0]

    video_od(args["video"], os.path.join(args['output'], video_name))
