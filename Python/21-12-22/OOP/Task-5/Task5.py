class Rectangle:
    def __init__(self, x, y, w, h):
        self.x = x
        self.y = y
        self.w = w
        self.h = h
    def get_x(self):
        return self.x
    
    def get_y(self):
        return self.y

    def get_w(self):
        return self.w

    def get_h(self):
        return self.h

    
    def intersection(self, r):    
        res = None
        for i in range(r.get_x(), r.get_x() + 1):
            print('aaa')
            
            
