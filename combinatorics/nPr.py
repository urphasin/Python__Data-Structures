import math
import random

def nPr(n, r):
    if r > n or n < 0 or r < 0:
        return 0
    return math.factorial(n) / math.factorial(n - r)


m = 7
n = 20
matrix = [[random.randint(0, 1) for _ in range(n)] for _ in range(m)]
print(nPr(6, 3))

for i in range(m):
    print("[ ", end="")
    for j in range(n):
        print(matrix[i][j], end=" ")
    print("],")
    print()
