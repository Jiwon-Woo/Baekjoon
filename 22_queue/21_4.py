import sys
import heapq

n = int(sys.stdin.readline().strip())
max_heap = []
min_heap = []

for _ in range(n):
	x = int(sys.stdin.readline().strip())
	if len(max_heap) == len(min_heap):
		heapq.heappush(max_heap, (-x, x))
	else:
		heapq.heappush(min_heap, (x, x))
	if min_heap and max_heap[0][1] > min_heap[0][1]:
		max_top = heapq.heappop(max_heap)[1]
		min_top = heapq.heappop(min_heap)[1]
		heapq.heappush(max_heap, (-min_top, min_top))
		heapq.heappush(min_heap, (max_top, max_top))
	print(max_heap[0][1])