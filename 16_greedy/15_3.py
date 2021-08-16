import sys

n = int(input())
wait = list(map(int, sys.stdin.readline().split()))

def	atm(n, wait):
	wait.sort(reverse=True)
	time = 0
	for i in range(n):
		time += wait[i] * (i + 1)
	return time

print(atm(n, wait))