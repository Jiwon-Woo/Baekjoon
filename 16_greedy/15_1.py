import sys

n, k = map(int, sys.stdin.readline().split())
coin = [int(sys.stdin.readline().strip()) for _ in range(n)]

def	money(n, k, coin):
	num = 0
	while (k > 0 and n > 0):
		n -= 1
		if (k // coin[n] == 0):
			continue
		num += k // coin[n]
		k %= coin[n]
	return num

print(money(n, k, coin))