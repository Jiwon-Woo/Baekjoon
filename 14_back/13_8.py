from itertools import combinations

num = int(input())
stat = [list(map(int, input().split())) for _ in range(num)]
team = []

for i in range(0, num, 1):
	team.append(i)

startlink = list(combinations(team, num // 2))
start = 0
link = 0
mini = 10000

for i in range(0, len(startlink) // 2, 1):
	start = 0
	link = 0
	for j in range(0, (num // 2) - 1, 1):
		for k in range(j + 1, num // 2, 1):
			row = startlink[i][j]
			col = startlink[i][k]
			l_row = startlink[len(startlink) - i - 1][j]
			l_col = startlink[len(startlink) - i - 1][k]
			start += stat[row][col] + stat[col][row]
			link += stat[l_row][l_col] + stat[l_col][l_row]
	if (abs(start - link) < mini):
		mini = abs(start - link)
	if (mini == 0):
		break

print(mini)


