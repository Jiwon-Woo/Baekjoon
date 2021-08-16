import sys
import heapq

n = int(sys.stdin.readline().strip())
abs_heap = []

for _ in range(n):
	x = int(sys.stdin.readline().strip())
	if len(abs_heap) == 0 and x == 0:
		print(0)
	elif x == 0:
		print(heapq.heappop(abs_heap)[1])
	else:
		heapq.heappush(abs_heap, (abs(x), x))