import onnxruntime
import numpy as np


class object_detector:
    def __init__(self, onnx_model_pth):
        sess_options = onnxruntime.SessionOptions()
        sess_options.set_graph_optimization_level(2)
        self.run_options = onnxruntime.RunOptions()
        self.sess = onnxruntime.InferenceSession(onnx_model_pth, sess_options=sess_options)

    def detect(self, frame):
        image = np.array(frame, dtype=np.float64)
        pred = self.sess.run(None, {self.sess.get_inputs()[0].name: image}, run_options=self.run_options)
        pred = pred[0]  # we always pass one image a time
        return pred
