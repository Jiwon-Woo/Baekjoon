import sys
from fractions import Fraction

n = int(input())
ring = list(map(int, sys.stdin.readline().split()))

def solution(first, num):
	if first % num != 0:
		ret = Fraction(first, num)
	else:
		ret = str(first // num)
		ret += '/1'
	return ret

for i in range(1, n):
	print(solution(ring[0], ring[i]))