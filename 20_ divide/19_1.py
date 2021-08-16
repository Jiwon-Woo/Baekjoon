import sys

n = int(input())
paper = []
for _ in range(n):
	paper.append(list(map(int, sys.stdin.readline().split())))
check = [[-1 for _ in range(n)] for _ in range(n)]
white_blue = [0, 0]

def	check_paper(paper, side, num, check, white_blue):
	if (side // num == 0):
		return (white_blue)
	for row_point in range(num):
		i = row_point * (side // num)
		for col_point in range(num):
			j = col_point * (side // num)
			if (check[i][j] != -1):
				continue
			color = paper[i][j]
			for x in range(side // num):
				for y in range(side // num):
					if (paper[i + x][j + y] != color):
						color = -1
						break
				if (color == -1):
					break
			if (color != -1):
				for x in range(side // num):
					for y in range(side // num):
						check[i + x][j + y] = color
				white_blue[color] += 1
	return (check_paper(paper, side, num * 2, check, white_blue))

answer = check_paper(paper, n, 1, check, white_blue)
print(answer[0])
print(answer[1])