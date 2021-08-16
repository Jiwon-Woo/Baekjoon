import sys

n1, n2 = map(int, sys.stdin.readline().split())

def inter(x, y):
	maxi = 1
	i = 2
	while (x > 1 and y > 1 and min(x, y) >= i):
		while (x % i == 0 and y % i == 0 and min(x, y) >= i):
			maxi *= i
			x = x // i
			y = y // i
		i += 1
	return maxi

def union(x, y):
	mini = 1
	i = 2
	while (x > 1 or y > 1) and max(x, y) >= i:
		while (x % i == 0 or y % i == 0) and max(x, y) >= i:
			mini *= i
			if x % i == 0:
				x = x // i
			if y % i == 0:
				y = y // i
		i += 1
	return mini

print(inter(n1, n2))
print(union(n1, n2))