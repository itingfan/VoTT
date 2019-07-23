from flask import Flask
from flask import request
import os
from flask import jsonify
from utils import Region, BoundingBox, VideoClip
import logging
from video_object_detection import video_od
app = Flask(__name__)

@app.route('/')
def hello_world():
    return 'Hello World!'

@app.route('/video', methods=['POST'])
def store_video():
    video = request.files["video"]
    video_pth = "static/test.mp4"
    video.save(video_pth)
    video_name = os.path.splitext(os.path.basename(video_pth))[0]
    video_od(video_pth, os.path.join('output', video_name))

    return 'Done'

@app.route('/track', methods=['POST'])
def track():
    json_request = request.get_json()
    video_clip_json = json_request['clip']
    video_clip = VideoClip(video_clip_json['id'], video_clip_json['startTimestamp'], video_clip_json['endTimestamp'])
    app.logger.info(video_clip)
    
    init_regions_json = json_request['init_regions']
    init_regions = []
    for i in range(len(init_regions_json)):
        region_json = init_regions_json[i]
        bbox_json = region_json['boundingBox']
        bbox = BoundingBox(bbox_json['left'], bbox_json['top'], bbox_json['width'], bbox_json['height'])
        init_regions.append(Region(region_json['id'], region_json['type'], region_json['tags'], region_json['points'], bbox))
    app.logger.info(init_regions)

    timestamp_region_pairs = []
    timestamp_region_pairs.append({'timestamp': 0.0, 'regions': [{'id': 'weichih', 'bbox': [1,2,3,4]}, {'id': 'liang', 'bbox': [5,6,7,8]}, {'id': 'kuan', 'bbox': [9,10,11,12]}]})
    timestamp_region_pairs.append({'timestamp': 1.0, 'regions': [{'id': 'weichih', 'bbox': [1.1,2.1,3.1,4.1]}, {'id': 'liang', 'bbox': [5.1,6.1,7.1,8.1]}, {'id': 'kuan', 'bbox': [9.1,10.1,11.1,12.1]}]})
    timestamp_region_pairs.append({'timestamp': 2.0, 'regions': [{'id': 'weichih', 'bbox': [1.2,2.2,3.2,4.2]}, {'id': 'liang', 'bbox': [5.2,6.2,7.2,8.2]}, {'id': 'kuan', 'bbox': [9.2,10.2,11.2,12.2]}]})
    return jsonify(timestamp_region_pairs)

if __name__ == '__main__':
    app.run(debug=True,host='0.0.0.0')