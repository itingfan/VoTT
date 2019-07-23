from flask import Flask
from flask import request
<<<<<<< HEAD
import os
from flask import jsonify
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
    app.logger.info(request.get_json())
    timestamp_region_pairs = []
    timestamp_region_pairs.append({'timestamp': 0.0, 'regions': [{'id': 'weichih', 'bbox': [1,2,3,4]}, {'id': 'liang', 'bbox': [5,6,7,8]}, {'id': 'kuan', 'bbox': [9,10,11,12]}]})
    timestamp_region_pairs.append({'timestamp': 1.0, 'regions': [{'id': 'weichih', 'bbox': [1.1,2.1,3.1,4.1]}, {'id': 'liang', 'bbox': [5.1,6.1,7.1,8.1]}, {'id': 'kuan', 'bbox': [9.1,10.1,11.1,12.1]}]})
    timestamp_region_pairs.append({'timestam1': 2.0, 'regions': [{'id': 'weichih', 'bbox': [1.2,2.2,3.2,4.2]}, {'id': 'liang', 'bbox': [5.2,6.2,7.2,8.2]}, {'id': 'kuan', 'bbox': [9.2,10.2,11.2,12.2]}]})
    return jsonify(timestamp_region_pairs)

if __name__ == '__main__':
    app.run(debug=True,host='0.0.0.0')