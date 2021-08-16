import sys

n = int(input())
case = [int(sys.stdin.readline().strip()) for i in range(n)]

if n == 1:
	print(case[0])
	sys.exit(0)

maxi = [0 for _ in range(n + 1)]
maxi[1] = case[0]
maxi[2] = case[0] + case[1]

for i in range(3, n + 1):
	maxi[i] = max(maxi[i - 2], maxi[i - 3] + case[i - 2]) + case[i - 1]

print(maxi[n])