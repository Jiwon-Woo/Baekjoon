import sys

n = int(input())
factor = list(map(int, sys.stdin.readline().split()))
factor.sort()

print(factor[0] * factor[len(factor) - 1])