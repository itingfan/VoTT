from flask import Flask
from flask import request
import os
from flask import jsonify
from utils import *
import logging
from video_object_detection import video_od
from multi_object_tracking import track_video
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
    video_clip = decode_video_clip_json(json_request['clip'])
    app.logger.info(video_clip)
    
    init_regions = decode_init_regions_json(json_request['init_regions'])
    app.logger.info(init_regions)

    result = track_video(video_clip, init_regions)
    app.logger.info(result)
    return jsonify(result)

if __name__ == '__main__':
    app.run(debug=True,host='0.0.0.0')