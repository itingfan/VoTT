# USAGE
# python multi_object_tracking.py --video videos/soccer_01.mp4 --tracker csrt

# import the necessary packages
import argparse
import imutils
import cv2
from config import FRAME_WIDE
import pickle
import os
from utils import VideoClip, TimestampRegionsPair, Region, BoundingBox
from helper import average_tracker_with_det
from multi_tracker import MultiTracker


cv2_visual = False
default_type, default_tag, default_points = 2, None, None


def track_video(init_regions, video_clip, app):

    app.logger.info("started tracking video {}")
    dic_idx_to_id = {i_idx : i_init.id for i_idx, i_init in enumerate(init_regions)}
    video_pth = video_clip.id

    app.logger.info("creating tracker")
    # initialize OpenCV's special multi-object tracker
    try:
        trackers = MultiTracker()
    except Exception as exp:
        app.logger.info(exp)
        raise

    app.logger.info("video loading")
    vs = cv2.VideoCapture(video_pth)
    app.logger.info("video loaded")
    fps = 15
    app.logger.info("fps: {}".format(fps))

    # loop over frames from the video stream
    sec = video_clip.start_time
    frame_rate = 1/fps

    TimestampRegionsPair_list = []
    while sec < video_clip.end_time:
        # grab the current frame, then handle if we are using a
        # VideoStream or VideoCapture object
        vs.set(cv2.CAP_PROP_POS_MSEC, sec * 1000)

        app.logger.info("frame loading")
        frame = vs.read()
        frame = frame[1]
        app.logger.info("frame loaded")

        # check to see if we have reached the end of the stream
        if frame is None:
            break

        # resize the frame (so we can process it faster)
        orig_frame_wide = frame.shape[1]
        frame = imutils.resize(frame, width=FRAME_WIDE)

        # grab the updated bounding box coordinates (if any) for each
        # object that is being tracked
        (success, boxes) = trackers.update(frame)

        od_bboxes_pth = os.path.join('output',
                                     os.path.splitext(os.path.basename(video_pth))[0],
                                     str(round(sec, 2))+'.p')
        app.logger.info("od bbox path: {}".format(od_bboxes_pth))
        if not os.path.exists(od_bboxes_pth):
            sec = sec-(sec % frame_rate)
            od_bboxes_pth = os.path.join('output',
                                         os.path.splitext(os.path.basename(video_pth))[0],
                                         str(round(sec, 2)) + '.p')
        od_bboxes = pickle.load(open(od_bboxes_pth, 'rb'))
        app.logger.info("od_bboxes loaded")

        track_recs = [(box[1][0], box[1][1], box[1][0] + box[1][2], box[1][1] + box[1][3]) for box in boxes]
        track_ids = [box[0] for box in boxes]
        # average detection with tracking boxes
        mean_boxes, _ = average_tracker_with_det(track_recs, od_bboxes)
        region_list = []
        for i_box, mean_box in enumerate(mean_boxes):
            bbox = BoundingBox(mean_box[0] * scale_back,
                               mean_box[1] * scale_back,
                               (mean_box[2]-mean_box[0]) * scale_back,
                               (mean_box[3]-mean_box[1]) * scale_back)
            region_list.append(Region(track_ids[i_box],
                                      default_type,
                                      default_tag,
                                      default_points,
                                      bbox))

        app.logger.info("od_bboxes loaded")

        # time stamp with the bbox map back to the original resolution
        TimestampRegionsPair_list.append(TimestampRegionsPair(round(sec, 6), region_list).to_dict())

        # re-init tracker
        if sec % 1 < 1e-3:
            for id_idx, track_id in enumerate(track_ids):
                update_box = (mean_boxes[id_idx][0], mean_boxes[id_idx][1],
                              mean_boxes[id_idx][2]-mean_boxes[id_idx][0], mean_boxes[id_idx][3]-mean_boxes[id_idx][1])
                trackers.reinit(track_id, tracker, frame, update_box)

        if cv2_visual:
            for det_bbox in od_bboxes:
                cv2.rectangle(frame, (det_bbox[0], det_bbox[1]), (det_bbox[2], det_bbox[3]), (0, 0, 255), 2)

            # loop over the bounding boxes and draw then on the frame
            for box in boxes:
                (x, y, w, h) = [int(v) for v in box[1]]
                # print((x, y), (x + w, y + h))
                cv2.rectangle(frame, (x, y), (x + w, y + h), (0, 255, 0), 2)

            for box in mean_boxes:
                (x, y, x2, y2) = [int(v) for v in box]
                # print((x, y), (x2, y2))
                cv2.rectangle(frame, (x, y), (x2, y2), (255, 255, 0), 2)

            # show the output frame
            cv2.imshow("Frame", frame)
            key = cv2.waitKey(1) & 0xFF

        if sec - video_clip.start_time < frame_rate:
            list_of_init_box = []
            list_if_init_id = []

            scale_back = orig_frame_wide / FRAME_WIDE
            scale_down = FRAME_WIDE / orig_frame_wide
            for region in init_regions:
                x, y, w, h = region.bbox.left, region.bbox.top, region.bbox.width, region.bbox.height
                box = tuple(map(lambda x: x * scale_down, (x, y, w, h)))
                # tracker = cv2.TrackerCSRT_create()
                tracker = cv2.TrackerCSRT_create
                list_of_init_box.append(box)
                list_if_init_id.append(region.id)
            trackers.add(tracker, frame, list_of_init_box, list_if_init_id)
            # tracker.update(frame)
        sec += frame_rate
    return TimestampRegionsPair_list

    # release the file pointer
    vs.release()

    # close all windows
    cv2.destroyAllWindows()


if __name__ == '__main__':
    videoClip = VideoClip(r"C:\Users\tobai\Documents\data\20190722_190943000_iOS.mp4", 2.0400000, 10.000000)
    init_regions = []
    init_regions.append(Region(1,
                              default_type,
                              default_tag,
                              default_points,
                              BoundingBox(520, 250, 351, 800)))
    init_regions.append(Region(2,
                               default_type,
                               default_tag,
                               default_points,
                               BoundingBox(1367, 284, 500, 800)))
    track_video(init_regions, videoClip)
