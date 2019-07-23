from flask import Flask
from flask import request
import os
app = Flask(__name__)

@app.route('/')
def hello_world():
    return 'Hello World!'

@app.route('/video', methods=['POST'])
def store_video():
    video = request.files["video"]
    video.save("static/test.mp4")
    return 'Done'

if __name__ == '__main__':
    app.run(debug=True,host='0.0.0.0')