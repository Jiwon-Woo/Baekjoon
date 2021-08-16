import sys

ps = sys.stdin.readline().strip('\n')

stack = [ps[0]]
for i in range(1, n):
	laser = 0
	if (ps[i - 1] == '(' and ps[i] == ')'):
		laser += 1
	if ()
