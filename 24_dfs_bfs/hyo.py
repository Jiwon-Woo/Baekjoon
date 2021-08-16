import sys
from collections import deque
input = sys.stdin.readline
m, n = map(int, input().split())

arr = []
dq = deque()
visited = [[0 for _ in range(m)]for j in range(n)]

for _ in range(m):
    arr.append(list(map(int, input().split())))


for i in range(n):
    for j in range(m):
        if arr[i][j] == 1:
            dq.append((i, j))
            visited[i][j] = 1



flag = 1
for i in range(n):
    for j in range(m):
        if arr[i][j] == 0:
            flag = 0
            break
if flag and dq:
    print(0)
    exit(0)

d_x = [0, 0, 1, -1]
d_y = [1, -1, 0, 0]

rst = 0
while 1:
    dqq = deque()
    while dq:
        x, y = dq.popleft()
        for i in range(4):
            xx = x + d_x[i]
            yy = y + d_y[i]
            if not(0 <= xx < n and 0 <= yy < m):
                continue
            if visited[xx][yy] or arr[xx][yy] != 0:
                continue
            dqq.append((xx, yy))
            visited[xx][yy] = 1
            arr[xx][yy] = 1
    dq = dqq
    if not dq:
        break
    rst += 1

for i in range(n):
    if 0 in arr[i]:
        print(-1)
        exit(0)
print(rst)