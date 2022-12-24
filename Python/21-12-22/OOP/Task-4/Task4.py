class Table:
    def __init__(self, row, col):
        self.row = row
        self.col = col
        self.arr = [['0' for i in range(row)] for j in range(col)]
    
    def get_value(self, row, col):
        if row > self.row or col > self.col:
            return None
        return self.arr[col][row]

    def set_value(self, row, col, value):
        self.arr[col][row] = value    

    def n_rows(self):
        return self.row

    def n_cols(self):
        return self.col

