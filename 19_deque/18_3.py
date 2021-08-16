import sys
from collections import deque

n, k = map(int, sys.stdin.readline().split())
table = deque([i for i in range(1, n + 1)])

print("<", end='')
while (len(table) > 0):
	for _ in range(k - 1):
		table.append(table.popleft())
	print(table.popleft(), end='')
	if (len(table) > 0):
		print(", ", end='')
print(">", end='')