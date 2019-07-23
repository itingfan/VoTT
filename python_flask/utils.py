class Region:
    def __init__(self, id, type, tags, points, bbox):
        self.id = id
        self.type = type
        self.tags = tags
        self.points = points
        self.bbox = bbox

class BoundingBox:
    def __init__(self, left, top, width, height):
        self.left = left
        self.top = top
        self.width = width
        self.height = height

class VideoClip:
    def __init__(self, id, start_time, end_time):
        self.id = id
        self.start_time = start_time
        self.end_time = end_time