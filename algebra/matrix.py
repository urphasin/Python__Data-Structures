import math
import random

def printMatrix(matrix, m, n):
    for i in range(m):
        print("[ ", end="")
        for j in range(n):
            print(matrix[i][j], end=" ")
        print("]")
        print()

m = 7
n = 20

matrix = [[random.randint(0, 1) for _ in range(n)] for _ in range(m)]

printMatrix(matrix=matrix, m=m, n=n)