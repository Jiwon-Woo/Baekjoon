import sys
import math

n = int(input())
s = str(math.factorial(n))

def solution(s):
	zero = 0
	for i in range(len(s) - 1, -1, -1):
		if s[i] == '0':
			zero += 1
		else:
			break
	return zero

print(solution(s))