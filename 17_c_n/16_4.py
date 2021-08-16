import sys

n = int(input())
num = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]

def factor(n1, n2):
	while n1 % n2 != 0:
		n1, n2 = n2, n1 % n2
	return n2

for n1, n2 in num:
	print(n1 * n2 // factor(n1, n2))



# import sys
# from math import gcd

# n = int(input())
# num = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]

# for n1, n2 in num:
# 	print(n1 * n2 // gcd(n1, n2))