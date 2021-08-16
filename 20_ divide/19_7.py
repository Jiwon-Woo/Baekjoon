import sys

n, b = map(int, sys.stdin.readline().split())
a = []
for _ in range(n):
	a.append(list(map(int, sys.stdin.readline().split())))

def	matrix_multi(a, x, n):
	ret = [[0 for _ in range(n)] for _ in range(n)]
	for row in range(n):
		for col in range(n):
			for i in range(n):
				ret[row][col] += a[row][i] * x[i][col]
			ret[row][col] %= 1000
	return (ret)

def	matrix_power(a, n, b):
	if b == 1:
		return a
	if b == 2:
		return matrix_multi(a, a, n)
	temp = matrix_power(matrix_power(a, n, b // 2), n, 2)
	if (b % 2 == 0):
		return (temp)
	else:
		return (matrix_multi(temp, a, n))

answer = matrix_power(a, n, b)

for row in answer:
	for factor in row:
		print(factor % 1000, end=' ')
	print()