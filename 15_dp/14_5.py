n = int(input())
rgb = [list(map(int, input().split())) for _ in range(n)]
house = [[0]*3 for _ in range(n)]

house[0] = rgb[0]

for i in range(n - 1):
	for j in range(3):
		if (house[i][(j + 1) % 3] < house[i][(j + 2) % 3]):
			house[i + 1][j] = rgb[i + 1][j] + house[i][(j + 1) % 3]
		else:
			house[i + 1][j] = rgb[i + 1][j] + house[i][(j + 2) % 3]

print(min(house[n - 1]))