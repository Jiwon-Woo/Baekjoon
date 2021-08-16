import sys

n = int(input())
a = list(map(int, sys.stdin.readline().split()))

stack = []
answer = [-1]
while(len(a) > 1):
	if (a[-2] >= a[-1] and len(stack) == 0):
		answer.append(-1)
	elif (a[-2] < a[-1]):
		while (len(stack) > 0 and stack[-1] < a[-1]):
			stack.pop()
		stack.append(a[-1])
		answer.append(a[-1])
	elif (a[-2] >= a[-1]):
		point = 1
		while (point <= len(stack)):
			if (stack[-point] > a[-2]):
				answer.append(stack[-point])
				break
			point += 1
		if (len(a) + len(answer) < n + 2):
			answer.append(-1)
	a.pop()

answer.reverse()
for factor in answer:
	print(factor, end=' ')