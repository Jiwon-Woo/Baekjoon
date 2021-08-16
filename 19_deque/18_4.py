import sys
from collections import deque

t = int(input())
for _ in range(t):
	n, m = map(int, sys.stdin.readline().split())
	print_queue = deque(map(int, sys.stdin.readline().split()))
	queue = deque([0 for _ in range(n)])
	queue[m] = 1
	count = 0
	while(len(print_queue) > 0):
		flag = 0
		for i in range(1, len(print_queue)):
			if (print_queue[0] < print_queue[i]):
				flag = 1
				print_queue.append(print_queue.popleft())
				queue.append(queue.popleft())
				break
		if (flag == 0):
			print_queue.popleft()
			count += 1
			if (queue.popleft() == 1):
				print(count)
				break