import sys
from operator import itemgetter

n = int(input())
meet = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]
meet.sort(key=itemgetter(1, 0))

end = 0
table = []

for i in range (n):
	if (meet[i][0] >= end):
		table.append(meet[i])
		end = meet[i][1]

print(len(table))