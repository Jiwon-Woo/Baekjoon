import sys

n = int(input())
seq = list(map(int, sys.stdin.readline().split()))

left = [0 for _ in range(n)]
right = [0 for _ in range(n)]

for i in range(n):
	maxi = 0
	for j in range(0, i):
		if seq[i] > seq[j]:
			maxi = max(maxi, left[j])
	left[i] = maxi + 1

for i in range(n - 1, -1, -1):
	maxi = 0
	for j in range(i, n):
		if seq[i] > seq[j]:
			maxi = max(maxi, right[j])
	right[i] = maxi + 1

sub = [x + y - 1 for x, y in zip(left, right)]

print(max(sub))