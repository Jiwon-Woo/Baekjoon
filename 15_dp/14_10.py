import sys

n = int(input())
case = [int(sys.stdin.readline().strip()) for i in range(n)]

if n == 1:
	print(case[0])
	sys.exit(0)

if n == 2:
	print(case[0] + case[1])
	sys.exit(0)

if n == 3:
	print(case[0] + case[1] + case[2] - min(case[0], case[1], case[2]))
	sys.exit(0)

maxi = [0 for _ in range(n + 1)]
maxi[1] = case[0]
maxi[2] = case[0] + case[1]
maxi[3] = (case[0] + case[1] + case[2]) - min(case[0], case[1], case[2])
maxi[4] = (case[0] + case[1] + case[2] + case[3]) - min(case[1], case[2], case[0] + case[3])

for i in range(5, n + 1):
	maxi[i] = max(maxi[i-3] + case[i-2] + case[i-1], maxi[i-2] + case[i-1], maxi[i-4] + case[i-3] + case[i-2])

print(maxi[n])