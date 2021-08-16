import sys
from collections import deque

n, m = map(int, sys.stdin.readline().split())
num = list(map(int, sys.stdin.readline().split()))
queue = deque([i for i in range(1, n + 1)])

count = 0
for factor in num:
	idx = queue.index(factor)
	if (idx - 0 <= len(queue) - 1 - idx):
		while (queue[0] != factor):
			count += 1
			queue.append(queue.popleft())
		queue.popleft()
	else:
		while (queue[0] != factor):
			count += 1
			queue.appendleft(queue.pop())
		queue.popleft()
print(count)