import cv2
import argparse
import imutils
from collections import defaultdict
import numpy as np


class MultiTracker(object):
    def __init__(self):
        self._trackers = dict()
        self._trajectories = defaultdict(list)

    def __len__(self):
        return len(self._trackers)

    def add(self, tracker, frame, bbox, IDs):
        '''
        Add tracker and init with bounding boxes
        :param tracker: opencv tracker type
        :param frame: ndarray
        :param bbox: tuple of list of tuple
        :param IDs: unique ID corresponding to each new tracker
        '''
        if isinstance(bbox, tuple):
            bboxes = [bbox]
            identities = [IDs]
        elif isinstance(bbox, list):
            bboxes = bbox
            identities = IDs
        else:
            raise ValueError

        for trk_id, box in zip(identities, bboxes):
            t = tracker()
            t.init(frame, box)
            self._trackers[trk_id] = t
            # self._bboxes.append(box)
            self._trajectories[trk_id].append(box)

    def update(self, frame):
        status = []
        for trk_id, t in self._trackers.items():
            # skip inactive trackers
            if t is None:
                continue
            ok, box = t.update(frame)
            status.append(ok)
            if ok:
                self._trajectories[trk_id].append(box)
            else:
                # lost tracking and deactivate tracker
                del self._trackers[trk_id]
                self._trackers[trk_id] = None

        # return the last box of each trajectory
        bbox = [(trk_id, self._trajectories[trk_id][-1]) for trk_id, t in self._trackers.items() if t is not None]
        return status, bbox

    def get_bbox(self, index):
        '''
        Get the last bounding box of the specified trajectory
        :param index: index of trajectory
        :return: bbox (tuple)
        '''
        return self._trajectories[index][-1]

    def get_trajectory(self, index):
        return self._trajectories[index]

    def reinit(self, index, tracker, frame, bbox):
        '''
        Re-initialize tracker
        :param index: index of tracker
        :param tracker: opencv tracker type
        :param frame:
        :param bbox:
        '''
        t = tracker()
        t.init(frame, bbox)
        self._trackers[index] = t
        # overwrite the last bbox in the trajectory
        self._trajectories[index][-1] = bbox


