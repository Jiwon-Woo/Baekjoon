p = [0 for _ in range(100)]

p[0] = 1
p[1] = 1
p[2] = 1
p[3] = 2
p[4] = 2

for i in range(5, 100, 1):
	p[i] = p[i - 1] + p[i - 5]

t = int(input())
for i in range(t):
	n = int(input())
	print(p[n - 1])