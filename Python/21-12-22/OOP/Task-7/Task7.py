class Table:
    def __init__(self, row, col):
        self.row = row
        self.col = col
        self.l = [[0 for _ in range(self.col)] for _ in range(self.row)]
    
    def get_value(self, row, col):
        if row > self.row or col > self.col:
            return None
        return self.l[row][col]

    def set_value(self, row, col, value):
        self.l[row][col] = value   
   
    def n_rows(self):
        return self.row
    
    def n_cols(self):
        return self.col
  
    def delete_row(self, row):
        del self.l[row]

    def delete_col(self, col):
        for i in range(self.row):
            del self.l[i][col]

    def add_row(self, row):
        self.l.insert(row, [0 for i in range(self.col)])
    
    def add_col(self, col):
        for i in range(self.row):
            i.insert(col, 0)



tab = Table(3, 5)
tab.set_value(0, 1, 10)
tab.set_value(1, 2, 20)
tab.set_value(2, 3, 30)
for i in range(tab.n_rows()):
    for j in range(tab.n_cols()):
        print(tab.get_value(i, j), end=' ')
    print()
print()
tab.add_row(1)
for i in range(tab.n_rows()):
    for j in range(tab.n_cols()):
        print(tab.get_value(i, j), end=' ')
    print()
print() 
