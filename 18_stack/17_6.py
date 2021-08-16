import sys

n = int(input())
a = list(map(int, sys.stdin.readline().split()))

stack = []
answer = [-1 for _ in range(n)]
for i in range(n - 1):
	stack.append(i)
	while (len(stack) > 0 and a[i + 1] > a[stack[-1]]):
		answer[stack.pop()] = a[i + 1]

for factor in answer:
	print(factor, end=' ')