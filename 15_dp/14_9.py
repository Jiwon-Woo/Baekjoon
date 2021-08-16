import sys

n = int(input())
memo = [0 for _ in range(n + 1)]
num = [[0 for _ in range(10)] for _ in range(n + 1)]

memo[1] = 9
num[1] = [1 for _ in range(10)]

for i in range(2, n + 1):
	for j in range(10):
		if j == 0:
			num[i][0] = num[i - 1][1]
		elif j == 9:
			num[i][9] = num[i - 1][8]
		else:
			num[i][j] = num[i - 1][j - 1] + num[i - 1][j + 1]
	memo[i] = (sum(num[i]) - num[i][0]) % 1000000000

print(memo[n] % 1000000000)