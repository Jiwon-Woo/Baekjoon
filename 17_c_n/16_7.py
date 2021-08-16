import sys
import math

n, k = map(int, sys.stdin.readline().split())

def combinations(n, k):
	ret = math.factorial(n) // math.factorial(k)
	ret = ret // math.factorial(n - k)
	return ret

print(combinations(n, k))