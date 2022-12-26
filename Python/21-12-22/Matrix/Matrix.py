import random


class Matrix:
		def __init__(self, row, col, values=None):
				self.row = row
				self.col = col
				if not values:
						self.values = [[str(random.randint(1,100)) for i in range(row)] for j in range(col)]
				else:
						self.values = values

		def show(self):
				lens = []
				for i in self.values:
						for j in i:
								lens.append(len(j))	
				print(((self.row * max(lens)) + self.row + 1) * '-')	
				for i in self.values:
						print('|' + '|'.join([j.rjust(max(lens)) for j in i]) + '|')
						print(((self.row * max(lens)) + self.row + 1) * '-')	
		
		def get_transpose(self):
				print("Transposed Matrix is getting ready ....")
				l = [[] for i in range(self.col)]
				if self.row == self.col:
						for i  in range(self.col):
								for j in range(self.row):
										l[i].append(self.values[j][i])
				else:
						print("Row must be equal to cols.")
						return None
				return Matrix(self.row, self.col, l)
		
		def add(self, add_elem):
				if 
				print("New matrix is getting ready")
				new_list = []
				for i in self.values:
						temp = []
						for j in i:
								temp.append(str(int(j) + add_elem))
						new_list.append(temp)
								
				return  Matrix(self.row, self.col, new_list)

a = Matrix(5, 5)
a.show()
b = a.get_transpose()
b.show()
c = b.add(5)
c.show()
