import sys

def	dp(chapter, k):
	cost = [0 for _ in range(k)]
	cost[-1], cost[-2] = chapter[-1], chapter[-1] + chapter[-2]
	for idx in range(k - 3, -1, -1):
		cost[idx] = min((chapter[idx] + cost[idx + 1] + cost[idx + 1]),
						((chapter[idx] + chapter[idx + 1]) + cost[idx + 2]) * 2)
	return (cost)

t = int(input())
for _ in range(t):
	k = int(input())
	chapter = list(map(int, sys.stdin.readline().split()))
	print(dp(chapter, k))