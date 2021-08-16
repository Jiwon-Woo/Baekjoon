import sys

lines = []
string = sys.stdin.readline().strip('\n')
while string != '.':
	lines.append(string)
	string = sys.stdin.readline().strip('\n')

def	vps(line):
	stack = []
	for ps in line:
		if ps == '(' or ps == '[':
			stack.append(ps)
		elif ps == ')' or ps == ']':
			if (len(stack) == 0):
				return('no')
			if ps == ')':
				if (stack[-1] == '('):
					stack.pop()
				else:
					return('no')
			else:
				if (stack[-1] == '['):
					stack.pop()
				else:
					return('no')
		else:
			continue
	if (len(stack) != 0):
		return('no')
	return('yes')

for line in lines:
	# print(line)
	print(vps(line))