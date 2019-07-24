import numpy as np


def rect_area(rc):
    return (rc[2] - rc[0] + 1) * (rc[3] - rc[1] + 1)


def calculate_iou(rc1,rc2):
    if len(rc1) == 0 or len(rc2) == 0:
        return 0
    rc_inter = [max(rc1[0], rc2[0]), max(rc1[1], rc2[1]), min(rc1[2], rc2[2]), min(rc1[3], rc2[3])]
    iw = rc_inter[2] - rc_inter[0] + 1
    ih = rc_inter[3] - rc_inter[1] + 1
    return (float(iw)) * ih / (rect_area(rc1) + rect_area(rc2) - iw * ih) if (iw > 0 and ih > 0) else 0


def calculate_bbox_ious(tracked_boxes, det_boxes):
    iou_list = []
    for t_bbox in tracked_boxes:
        iou_list.append([calculate_iou(t_bbox, d_box) for d_box in det_boxes])

    return iou_list


def average_tracker_with_det(tracked_boxes, det_boxes, iou_thre=0.3, conf_thre=0.6):
    det_boxes = [d_box for d_box in det_boxes if d_box[-1] > conf_thre]
    iou_list = calculate_bbox_ious(tracked_boxes, det_boxes)

    mean_tracked_box = []
    max_ious = []
    for t_idx, t_box in enumerate(tracked_boxes):
        target_d_boxes = np.array(np.zeros((0, 4)))
        t_ious = iou_list[t_idx]
        for d_idx, d_box_iou in enumerate(t_ious):
            if d_box_iou > iou_thre:
                target_d_boxes = np.vstack((target_d_boxes, det_boxes[d_idx][:4]))
        if target_d_boxes.shape[0] == 0:
            mean_tracked_box.append(t_box)
        else:
            mean_tracked_box.append(np.mean(target_d_boxes, axis=0))
        max_ious.append(max(iou_list[t_idx]))
    return mean_tracked_box, max_ious

