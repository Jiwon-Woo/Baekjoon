import sys

n = int(input())
seq = list(map(int, sys.stdin.readline().split()))
sub = [0 for _ in range(n)]
sub[n -1] = seq[n - 1]

for i in range(n - 2, -1, -1):
	sub[i] += seq[i]
	if (sub[i + 1] > 0):
		sub[i] += sub[i + 1]

print(max(sub))