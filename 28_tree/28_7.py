import sys
import copy

# answers = ['Case 3: No trees.', 'Case 1: A forest of 3 trees.', 'Case 2: There is one tree.']
n, m = map(int, sys.stdin.readline().split())

def	dfs(linked, n):
	tree = 0
	visited, visited[0] = [0 for _ in range(n + 1)], 1
	unvisited = n
	copy_linked = copy.deepcopy(linked)
	while unvisited:
		for i in range(1, n + 1):
			if (visited[i] == 1):
				continue
			stack = [i]
			visited[i] = 1
			unvisited -= 1
			is_tree = 1
			while stack:
				current = stack.pop()
				while copy_linked[current]:
					temp = copy_linked[current].pop()
					copy_linked[temp].pop(copy_linked[temp].index(current))
					if (visited[temp] == 0):
						stack.append(temp)
						visited[temp] = 1
						unvisited -= 1
					elif (len(linked[temp]) > 1):
						is_tree = 0
						break
			if is_tree == 1:
				tree += 1
	return tree

case = 1
while (not(n == 0 and m == 0)):
	linked = [[] for _ in range(n + 1)]
	for _ in range(m):
		node1, node2 = map(int, sys.stdin.readline().split())
		linked[node1].append(node2)
		linked[node2].append(node1)
	tree_num = dfs(linked, n)
	if (tree_num == 0):
		print(f"Case {case}: No trees.")
	elif (tree_num == 1):
		print(f"Case {case}: There is one tree.")
	else:
		print(f"Case {case}: A forest of {tree_num} trees.")
	case += 1
	n, m = map(int, sys.stdin.readline().split())