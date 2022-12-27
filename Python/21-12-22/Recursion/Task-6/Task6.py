matrix1 = [[0, 0, 0, 0], [0, 0, 2, 0], [0, 1, 0, 0], [3, 0, 0, 4]]

def possible(y,x,n,matrix):
    for i in range(4):
        if matrix[y][i] == n:
            return False
    for i in range(4):
        if matrix[i][x] == n:
            return False
    return True


def solve_sudoku(matrix):
    for y in range(4):
        for x in range(4):
            if matrix[y][x] == 0:
                for n in range(1,5):
                    if possible(y,x,n, matrix):
                        matrix[y][x] = n
                        solve_sudoku(matrix)
    return matrix

for i in matrix1:
    print(' '.join([str(j) for j in i]), '\n')

print('----------------------------------------')
res = solve_sudoku(matrix1)

for i in res:
    print(' '.join([str(j) for j in i]), '\n')
    


