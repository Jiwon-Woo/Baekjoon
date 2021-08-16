import sys

n, c = map(int, sys.stdin.readline().split())
coordi = [0 for _ in range(n)]
for i in range(n):
	coordi[i] = int(input())
coordi.sort()

def	solution(n, c, coordi):
	start, end = 1, coordi[-1] - coordi[0]
	while end - start > 1:
		mid = (start + end) // 2
		router = [0 for _ in range(n)]
		count, router[0] = 1, 1
		for i in range(1, n):
			j = i - 1
			while router[j] == 0:
				j -= 1
			if coordi[i] - coordi[j] >= mid:
				count += 1
				router[i] = 1
		if count >= c:
			start = mid
		else:
			end = mid
	return start

print(solution(n, c, coordi))