import sys

n, m = map(int, sys.stdin.readline().split())
a = []
for _ in range(n):
	a.append(list(map(int, sys.stdin.readline().split())))

m, k = map(int, sys.stdin.readline().split())
b = []
for _ in range(m):
	b.append(list(map(int, sys.stdin.readline().split())))


def	matrix_multi(a, b, n, m, k):
	ret = [[0 for _ in range(k)] for _ in range(n)]
	for row in range(n):
		for col in range(k):
			for i in range(m):
				ret[row][col] += a[row][i] * b[i][col]
	return (ret)



ret = matrix_multi(a, b, n, m, k)

for row in ret:
	for factor in row:
		print(factor, end=' ')
	print()