class Rectangle:
    def __init__(self, x1, y1, w, h):
        self.x1 = x1
        self.y1 = y1
        self.w = w
        self.h = h
        self.x2 = x1 + w
        self.y2 = y1 + h

    def get_x(self):
        return self.x1
    
    def get_y(self):
        return self.y1

    def get_w(self):
        return self.w

    def get_h(self):
        return self.h

    
    def intersection(self, new_rect):
        n_x1 = new_rect.x1
        n_x2 = new_rect.x2
        n_y1 = new_rect.y1
        n_y2 = new_rect.y2
        l_x = max(self.x1, n_x1)
        l_y = max(self.y1, n_y1)

        r_x = min(self.x2, n_x2)
        r_y = min(self.y2, n_y2)
        
        if l_x >= r_x or l_y >= r_y:
            return None
        return Rectangle(l_x, l_y, r_x - l_x, r_y - l_y)
            
        
rect1 = Rectangle(0, 0, 10, 10)
rect2 = Rectangle(5, 5, 10, 10)
rect3 = rect1.intersection(rect2)
if rect3 is None:
    print('No intersection')
else:
    print(rect3.get_x(), rect3.get_y(), rect3.get_w(), rect3.get_h())
