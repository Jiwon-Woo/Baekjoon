import sys

n = int(input())
image = []
for _ in range(n):
	image.append(list(sys.stdin.readline().strip()))
answer = ''

def	quadTree(image, n, depth, answer, pos):
	if (n < depth):
		return (answer)
	zero_one = image[pos[0]][pos[1]]
	for i in range(n // depth):
		for j in range(n // depth):
			if (image[pos[0] + i][pos[1] + j] != zero_one):
				zero_one = '-1'
				break
		if zero_one == '-1':
			break
	if zero_one == '-1':
		answer += '('
		for upper_lower in range(2):
			for left_right in range(2):
				x = pos[0] + upper_lower * (n // (depth * 2))
				y = pos[1] + left_right * (n // (depth * 2))
				answer = quadTree(image, n, depth * 2, answer, [x, y])
		answer += ')'
	else:
		answer += zero_one
	return (answer)

print(quadTree(image, n, 1, answer, [0, 0]))