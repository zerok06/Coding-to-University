class Point2D:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def translation(self, a, b):
        self.x += a
        self.y += b

    def __str__(self):
        return "X: {}; Y: {}".format(self.x, self.y)


class Point3D(Point2D):
    def __init__(self, x, y, z):
        super(Point3D, self).__init__(x, y)
        self.z = z

    def translation(self, x, y, z):
        super().translation(x, y)
        self.z += z

    def __str__(self):
        _2d = super().__str__()
        return "{}; Z = {}".format(_2d, self.z)