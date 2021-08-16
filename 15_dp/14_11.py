import sys

n = int(input())
seq = list(map(int, sys.stdin.readline().split(" ")))

sub = [0 for _ in range(n)]
sub[n - 1] = 1

for i in range(n - 2, -1, -1):
	maxi = 0
	for j in range(i + 1, n):
		if seq[j] > seq[i]:
			maxi = max(maxi, sub[j])
	sub[i] = maxi + 1

print(max(sub))