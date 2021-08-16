import sys
sys.setrecursionlimit(10**6)

n = int(input())
inorder = list(map(int, sys.stdin.readline().split()))
postorder = list(map(int, sys.stdin.readline().split()))
index = [0 for _ in range(n + 1)]
for i in range(n):
	index[inorder[i]] = i
# preorder = []

def pre(in_start, in_end, post_start, post_end):
	global inorder, postorder
	if post_start < post_end:
		root = postorder[post_end - 1]
		print(root, end=" ")
		# if not (root in preorder):
		# 	preorder.append(root)
		idx = index[root] - in_start
		if (idx > 0):
			pre(in_start, in_start + idx, post_start, post_start + idx)
		if (idx >= 0 and in_start + idx + 1 < in_end):
			pre(in_start + idx + 1, in_end, post_start + idx, post_end - 1)

pre(0, n, 0, n)
# print(preorder)