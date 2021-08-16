import sys
import math

t = int(input())
bridge = [list(map(int, sys.stdin.readline().split())) for _ in range(t)]

def combinations(n, k):
	ret = math.factorial(n) // math.factorial(k)
	ret = ret // math.factorial(n - k)
	return ret

def	solution(bridge):
	ret = []
	for west, east in bridge:
		ret.append(combinations(east, west))
	return ret

for ret in solution(bridge):
	print(ret)