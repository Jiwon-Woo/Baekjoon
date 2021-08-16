import sys

t = int(input())
cases = [sys.stdin.readline().strip() for _ in range(t)]

def	vps(test_data):
	stack = []
	if (test_data[-1] == '('):
		return('NO')
	for ps in test_data:
		if ps == '(':
			stack.append("ps")
		if ps == ')':
			if (len(stack) == 0):
				return ('NO')
			stack.pop()
	if (len(stack) != 0):
		return('NO')
	return('YES')

for test_data in cases:
	print(vps(test_data))
