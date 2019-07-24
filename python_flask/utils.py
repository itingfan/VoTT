class Region:
    def __init__(self, id, type, tags, points, bbox):
        self.id = id
        self.type = type
        self.tags = tags
        self.points = points
        self.bbox = bbox

    def to_dict(self):
        return {'id': self.id,
                'type': self.type,
                'tags': self.tags,
                'points': self.points,
                'boundingBox': self.bbox.to_dict()}

class BoundingBox:
    def __init__(self, left, top, width, height):
        self.left = left
        self.top = top
        self.width = width
        self.height = height

    def to_dict(self):
        return {'left': self.left, 
                'top': self.top,
                'width': self.width,
                'height': self.height}

class VideoClip:
    def __init__(self, id, start_time, end_time):
        self.id = id
        self.start_time = start_time
        self.end_time = end_time

    def to_dict(self):
        return {'id': self.id,
                'start_time': self.start_time,
                'end_time': self.end_time}

class TimestampRegionsPair:
    def __init__(self, timestamp, regions):
        self.timestamp = timestamp
        self.regions = regions

    def to_dict(self):
        return {'timestamp': self.timestamp,
                'regions': [r.to_dict() for r in self.regions] if self.regions else None}

def decode_video_clip_json(video_clip_json):
    return VideoClip(video_clip_json['id'], video_clip_json['startTimestamp'], video_clip_json['endTimestamp'])

def decode_init_regions_json(init_regions_json):
    init_regions = []
    for i in range(len(init_regions_json)):
        region_json = init_regions_json[i]
        bbox_json = region_json['boundingBox']
        bbox = BoundingBox(bbox_json['left'], bbox_json['top'], bbox_json['width'], bbox_json['height'])
        init_regions.append(Region(region_json['id'], region_json['type'], region_json['tags'], region_json['points'], bbox))
    return init_regions