import sys

n = int(input())
paper = []
for _ in range(n):
	paper.append(list(map(int, sys.stdin.readline().split())))
paper_num = [0, 0, 0]

def	nineTree(paper, n, depth, paper_num, pos):
	if (n < depth):
		return (paper_num)
	paper_type = paper[pos[0]][pos[1]]
	for i in range(n // depth):
		for j in range(n // depth):
			if (paper[pos[0] + i][pos[1] + j] != paper_type):
				paper_type = 42
				break
		if paper_type == 42:
			break
	if paper_type == 42:
		for upper_lower in range(3):
			for left_right in range(3):
				x = pos[0] + upper_lower * (n // (depth * 3))
				y = pos[1] + left_right * (n // (depth * 3))
				paper_num = nineTree(paper, n, depth * 3, paper_num, [x, y])
	else:
		paper_num[paper_type + 1] += 1
	return (paper_num)

for answer in nineTree(paper, n, 1, paper_num, [0, 0]):
	print(answer)