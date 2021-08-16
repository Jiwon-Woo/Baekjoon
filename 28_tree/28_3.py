import sys
import copy

n = int(input())
tree = [[[0, 0]] for _ in range(n + 1)]
for _ in range(n - 1):
	parent, child, weight = map(int, sys.stdin.readline().split())
	tree[child][0][0], tree[child][0][1] = parent, weight
	tree[parent].append([child, weight])

    
def is_parent(path_top, stack_top):
	global tree
	if path_top == tree[stack_top][0][0]:
		return 1
	return 0

def	is_in_path(path, stack_top):
	if len(path) == 0:
		return 0
	for factor in path:
		if stack and factor[0] == stack_top[0]:
			return 1
	return 0

def	is_connect(path, stack_top):
	global tree
	for factor in tree[stack_top]:
		if factor[0] == path[-1][0]:
			return 1
	return 0



stack = [[1, 0]]
copy_tree = copy.deepcopy(tree)
total_weight = 0
last_node = []
path = []

while stack:
	path.append(stack.pop())
	total_weight += path[-1][1]
	if len(tree[path[-1][0]]) == 1:
		last_node.append([total_weight, path[-1][0]])
		total_weight -= path.pop()[1]
		while path and stack and is_parent(path[-1][0], stack[-1][0]) == 0:
			total_weight -= path.pop()[1]
	else:
		while len(copy_tree[path[-1][0]]) > 1:
			stack.append(copy_tree[path[-1][0]].pop())

last_node.sort()
max_weight = last_node[-1][0]
start_node = []
for factor in last_node:
	if factor[0] == max_weight:
		start_node.append(factor[1])


answer = 0
for start in start_node:
	stack = [[start, 0]]
	copy_tree = copy.deepcopy(tree)
	total_weight = 0
	path = []
	while stack:
		temp = stack.pop()
		if is_in_path(path, temp) == 0:
			path.append(temp)
			total_weight += path[-1][1]
		if len(copy_tree[path[-1][0]]) == 0:
			if path[-1][0] != start and len(tree[path[-1][0]]) == 1:
				answer = max(answer, total_weight)
			while path and stack and is_connect(path, stack[-1][0]) == 0:
				total_weight -= path.pop()[1]
		else:
			while len(copy_tree[path[-1][0]]) > 0:
				stack.append(copy_tree[path[-1][0]].pop())

print(answer)