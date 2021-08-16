import sys
from math import ceil, log2
sys.setrecursionlimit(10**6)

def	tree_init(start, end, node):
	global case, tree
	if start == end:
		tree[node] = case[start], start
		return tree[node]
	else:
		mid = (start + end) // 2
		tree[node] = min(tree_init(start, mid, node * 2), tree_init(mid + 1, end, node * 2 + 1))
		return tree[node]


def find_min(left, right, start, end, node):
	global tree
	if start <= left and right <= end:
		return tree[node]
	elif right < start or end < left:
		return 1000000001, 0
	mid = (left + right) // 2
	return min(find_min(left, mid, start, end, node * 2), find_min(mid+1, right, start, end, node * 2 + 1))
	

def max_area(start, end):
	global case
	if start > end:
		return 0
	elif start == end:
		return case[start]
	common_high, min_index = find_min(1, case[0], start, end, 1)
	area = (end - start + 1) * common_high
	return max(area, max_area(start, min_index - 1), max_area(min_index + 1, end))


case = list(map(int, sys.stdin.readline().split()))
while case[0] != 0:
	size = 2 ** (ceil(log2(case[0]) + 1))
	tree = [-1 for _ in range(size)]
	tree_init(1, case[0], 1)
	print(max_area(1, case[0]))
	case = list(map(int, sys.stdin.readline().split()))
