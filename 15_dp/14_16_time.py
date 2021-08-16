import sys

nk = list(map(int, sys.stdin.readline().split()))
wv = [list(map(int, sys.stdin.readline().split())) for _ in range(nk[0])]
bag = [0 for _ in range(nk[1] + 1)]

for i in range(nk[0]):
	bag[wv[i][0]] = max(wv[i][1], bag[wv[i][0]])

for i in range(1, nk[1] + 1):
	maxi = bag[i]
	for j in range(1, i // 2):
		maxi = max(maxi, bag[j] + bag[i - j])
	if (i % 2 == 1):
		maxi = max(maxi, bag[i // 2] + bag[i // 2 + 1])
	bag[i] = maxi

print(bag[nk[1]])