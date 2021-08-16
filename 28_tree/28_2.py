import sys
from collections import deque
import copy

v = int(input())
tree = [[] for _ in range(v + 1)]
for _ in range(v):
	linked_nodes = deque(map(int, sys.stdin.readline().split()))
	node = linked_nodes.popleft()
	linked_nodes.pop()
	for i in range(0, len(linked_nodes), 2):
		link, distance = linked_nodes[i], linked_nodes[i + 1]
		tree[node].append((link, distance))


def is_linked(tree, path_top, stack_top):
	if (len(tree[path_top]) < len(tree[stack_top])):
		for node in tree[path_top]:
			if node[0] == stack_top:
				return 1
	else:
		for node in tree[stack_top]:
			if node[0] == path_top:
				return 1
	return 0


def dfs(v, tree, n):
	visited, visited[v] = [0 for _ in range(n + 1)], 1
	stack, path = [(v, 0)], []
	copy_tree = copy.deepcopy(tree)
	distance, total_distance = 0, []
	while stack:
		current = stack.pop()
		path.append(current)
		distance += current[1]
		while copy_tree[current[0]]:
			temp = copy_tree[current[0]].pop()
			if (visited[temp[0]] == 0):
				stack.append(temp)
				visited[temp[0]] = 1
		if len(copy_tree[current[0]]) == 0:
			total_distance.append((distance, current[0]))
			while path and stack and is_linked(tree, path[-1][0], stack[-1][0]) == 0:
				distance -= path.pop()[1]
	total_distance.sort()
	return total_distance

answer = dfs(v, tree, v)[-1]
if answer[1] != v:
	answer = dfs(answer[1], tree, v)[-1]
print(answer[0])