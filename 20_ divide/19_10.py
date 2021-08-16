import sys
import math

n = int(input())
coordi = []
for _ in range(n):
	x, y = map(int, sys.stdin.readline().split())
	coordi.append([x, y])
coordi.sort()

print(coordi)

def distance(a, b):
	a_2 = (a[0] - b[0]) ** 2
	b_2 = (a[1] - b[1]) ** 2
	return ((a_2 + b_2) ** (1 / 2))

def	solution(coordi):
	if (len(coordi) == 2):
		return (distance(coordi[0], coordi[1]))
	if (len(coordi) == 3):
		return (min(distance(coordi[0], coordi[1]), distance(coordi[0], coordi[2]), distance(coordi[2], coordi[1])))