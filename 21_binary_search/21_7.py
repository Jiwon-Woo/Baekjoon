import sys

n = int(input())
a_list = list(map(int, sys.stdin.readline().split()))
lis = [a_list[0]]

def	find_idx(lis, a):
	start = 0
	end = len(lis) - 1
	while end > start:
		mid = (start + end) // 2
		if a == lis[mid]:
			return mid
		elif a > lis[mid]:
			start = mid + 1
		else:
			end = mid
	return start

for a in a_list:
	if lis[-1] < a:
		lis.append(a)
	else:
		lis[find_idx(lis, a)] = a

print(len(lis))