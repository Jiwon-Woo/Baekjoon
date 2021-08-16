import sys

n = int(sys.stdin.readline().strip())
matrix = [[1, 1], [1, 0]]

def	matrix_multi(a, x):
	ret = [[0 for _ in range(2)] for _ in range(2)]
	for row in range(2):
		for col in range(2):
			for i in range(2):
				ret[row][col] += a[row][i] * x[i][col]
			ret[row][col] %= 1000000007
	return (ret)

def	matrix_power(a, b):
	if b == 1:
		return a
	if b == 2:
		return matrix_multi(a, a)
	temp = matrix_power(matrix_power(a, b // 2), 2)
	if (b % 2 == 0):
		return (temp)
	else:
		return (matrix_multi(temp, a))

def	fibonacci(n, matrix):
	if n== 0:
		return 0
	if n == 1 or n == 2:
		return 1
	temp = matrix_power(matrix, n)
	return temp[1][0]

print(fibonacci(n, matrix))
