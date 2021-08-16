import sys
import heapq

n = int(sys.stdin.readline().strip())
max_heap = []

for _ in range(n):
	x = int(sys.stdin.readline().strip())
	if len(max_heap) == 0 and x == 0:
		print(0)
	elif x == 0:
		print(heapq.heappop(max_heap)[1])
	else:
		heapq.heappush(max_heap, (-x, x))