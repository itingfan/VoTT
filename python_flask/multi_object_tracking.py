# USAGE
# python multi_object_tracking.py --video videos/soccer_01.mp4

# import the necessary packages
import argparse
import imutils
import cv2
from config import FRAME_WIDE
import pickle
import os

from helper import average_tracker_with_det


# construct the argument parser and parse the arguments
ap = argparse.ArgumentParser()
ap.add_argument("-v", "--video", type=str,
    help="path to input video file")
ap.add_argument("-o", "--output", type=str, default="output",
    help="OpenCV object tracker type")


args = vars(ap.parse_args())

# initialize OpenCV's special multi-object tracker
trackers = cv2.MultiTracker_create()

vs = cv2.VideoCapture(args["video"])
fps = 15
print("fps: {}".format(fps))

# loop over frames from the video stream
frame_idx = 0
sec = 0
frame_rate = 1/fps

while True:
    # grab the current frame, then handle if we are using a
    # VideoStream or VideoCapture object
    vs.set(cv2.CAP_PROP_POS_MSEC, sec * 1000)
    sec += frame_rate
    frame = vs.read()
    frame = frame[1]

    # check to see if we have reached the end of the stream
    if frame is None:
        break

    # resize the frame (so we can process it faster)
    frame = imutils.resize(frame, width=FRAME_WIDE)


    # grab the updated bounding box coordinates (if any) for each
    # object that is being tracked
    (success, boxes) = trackers.update(frame)



    # loop over the bounding boxes and draw then on the frame
    for box in boxes:
        (x, y, w, h) = [int(v) for v in box]
        cv2.rectangle(frame, (x, y), (x + w, y + h), (0, 255, 0), 2)
    od_bboxes_pth = os.path.join(args['output'],
                                 os.path.splitext(os.path.basename(args["video"]))[0],
                                 str(round(sec,2))+'.p')
    od_bboxes = pickle.load(open(od_bboxes_pth, 'rb'))
    # average detection with tracking boxes

    track_rec = [(box[0], box[1], box[0] + box[2], box[1]+box[3])for box in boxes]

    mean_boxes = average_tracker_with_det(track_rec, od_bboxes)
    for box in mean_boxes:
        (x, y, x2, y2) = [int(v) for v in box]
        cv2.rectangle(frame, (x, y), (x2, y2), (255, 255, 0), 2)

    for det_bbox in od_bboxes:
        cv2.rectangle(frame, (det_bbox[0], det_bbox[1]), (det_bbox[2], det_bbox[3]), (0, 0, 255), 2)
    frame_idx += 1
    # show the output frame
    cv2.imshow("Frame", frame)
    key = cv2.waitKey(1) & 0xFF


    if frame_idx == 1:
        box =tuple(map(lambda x: x * 600 / 1907, (886, 273, 200, 800)))
        # boxes = [tuple(map(lambda x: x * 600 / 1907, (520, 250, 351, 800))),
        #        tuple(map(lambda x: x * 600 / 1907, (1367, 284, 1734, 1056)))]
        # box = cv2.selectROI("Frame", frame, fromCenter=False,
        #                     showCrosshair=True)
        tracker = cv2.TrackerCSRT_create()

        trackers.add(tracker, frame, box)
        tracker.update(frame)


# if we are using a webcam, release the pointer
if not args.get("video", False):
    vs.stop()

# otherwise, release the file pointer
else:
    vs.release()

# close all windows
cv2.destroyAllWindows()