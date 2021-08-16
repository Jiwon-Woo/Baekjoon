import sys

class MyStack:
	def __init__(self):
		self.stack = []
		return

	def push(self, num):
		self.stack.append(num)
		return

	def pop(self):
		if (len(self.stack) == 0):
			return -1
		x = self.stack[-1]
		self.stack.pop()
		return (x)

	def size(self):
		return len(self.stack)

	def empty(self):
		return (int(len(self.stack) == 0))

	def top(self):
		if (len(self.stack) == 0):
			return -1
		return (self.stack[-1])


n = int(input())
commands = []
for i in range(n):
	cmd = sys.stdin.readline().strip()
	if (cmd.startswith('push') == 1):
		cmd = cmd.split(' ')[1]
	commands.append(cmd)

def	ft_stack(n, commands):
	stack = MyStack()
	# print("first stack =", stack.stack)
	for i in range(n):
		if (commands[i].isdigit() == 1):
			stack.push(int(commands[i]))
		else:
			ret = f'stack.{commands[i]}()'
			# print(ret)
			print(eval(ret))
		# print(i, "stack =", stack.stack)
	# print("last stack =", stack.stack)
	return

# print(commands)
ft_stack(n, commands)