import sys

n = int(input())

if (n == 1 or n == 2):
	print(n - 1)
	sys.exit(0)

memo = [0 for _ in range(n + 1)]
memo[2], memo[3] = 1, 1

for i in range(4, n + 1):
	if (i % 2 != 0 and i % 3 != 0):
		memo[i] = memo[i - 1] + 1
	elif (i % 2 != 0):
		memo[i] = min(memo[i - 1], memo[i // 3]) + 1
	elif (i % 3 != 0):
		memo[i] = min(memo[i - 1], memo[i // 2]) + 1
	else:
		memo[i] = min(memo[i - 1], memo[i // 2], memo[i // 3]) + 1

print(memo[n])