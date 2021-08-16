import sys
from collections import deque

n = int(sys.stdin.readline().strip())
heap = deque()

for _ in range(n):
	x = int(sys.stdin.readline().strip())
	if len(heap) == 0 and x == 0:
		print(0)
	elif x == 0:
		heap[0], heap[-1] = heap[-1], heap[0]
		print(heap.pop())
		root = 1
		while (root * 2 <= len(heap)):
			if (root * 2 == len(heap) or heap[root * 2 - 1] > heap[root * 2]):
				if (heap[root - 1] < heap[root * 2 - 1]):
					heap[root - 1], heap[root * 2 - 1] = heap[root * 2 - 1], heap[root - 1]
					root = root * 2
				else :
					break
			else:
				if (heap[root - 1] < heap[root * 2]):
					heap[root - 1], heap[root * 2] = heap[root * 2], heap[root - 1]
					root = root * 2 + 1
				else :
					break
	else:
		heap.append(x)
		node = len(heap)
		while (node // 2 - 1 >= 0):
			if (heap[node // 2 - 1] < heap[node - 1]):
				heap[node // 2 - 1], heap[node - 1] = heap[node - 1], heap[node // 2 - 1]
			else :
				break
			node //= 2 

