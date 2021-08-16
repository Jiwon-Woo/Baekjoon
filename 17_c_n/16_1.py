import sys

num = []
first, second = -1, -1

while first * second != 0:
	first, second = map(int, sys.stdin.readline().split())
	if first * second != 0:
		num.append([first, second])

def	multi_factor(first, second):
	if max(first, second) % min(first, second) == 0:
		if first > second:
			print("multiple")
		else:
			print("factor")
	else:
		print("neither")

for index in range(len(num)):
	multi_factor(num[index][0], num[index][1])