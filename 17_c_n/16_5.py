import sys
from math import gcd

n = int(input())
num = [int(sys.stdin.readline().strip()) for _ in range(n)]

def difference(num):
	num.sort()
	diff = []
	for i in range(1, len(num)):
		diff.append(num[i] - num[i - 1])
	return (diff)

def great_divisor(diff):
	if len(diff) == 1:
		return diff[0]
	gd = gcd(diff[0], diff[1])
	for i in range(2, len(diff)):
		gd = gcd(gd, diff[i])
	return gd

def common_divisor(gd):
	divisor = [gd]
	for i in range(2, int(gd ** 0.5) + 1):
		if (gd % i == 0):
			divisor.append(i)
			if gd != i * i:
				divisor.append(gd // i)
	divisor.sort()
	return divisor

divisor = common_divisor(great_divisor(difference(num)))

for m in divisor:
	print(m, end = ' ')