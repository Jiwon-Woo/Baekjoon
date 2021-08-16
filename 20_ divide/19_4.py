import sys

a, b, c = map(int, sys.stdin.readline().split())

def multi(a, b, c):
	if (b == 0):
		return (1)
	if (b == 1):
		return (a % c)
	temp = multi(a, b // 2, c)
	return ((temp * temp * multi(a, b % 2, c)) % c)

print(multi(a, b, c))