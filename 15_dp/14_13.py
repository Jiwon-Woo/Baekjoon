import sys
from operator import itemgetter

n = int(input())
seq = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]
seq.sort(key=itemgetter(0))

sub = [0 for _ in range(n)]

for i in range(n - 1, -1, -1):
	maxi = 0
	for j in range(i + 1, n):
		if seq[j][1] > seq[i][1]:
			maxi = max(maxi, sub[j])
	sub[i] = maxi + 1

print(n - max(sub))