length = int(input())
triangle = [list(map(int, input().split())) for _ in range(length)]

sum = [[0]*i for i in range(1, length + 1, 1)]
sum[length - 1] = triangle[length - 1]

for i in range(length - 1, -1, -1):
	for j in range (i):
		if (sum[i][j] > sum[i][j + 1]):
			sum[i - 1][j] = triangle[i - 1][j] + sum[i][j]
		else:
			sum[i - 1][j] = triangle[i - 1][j] + sum[i][j + 1]

print (sum[0][0])