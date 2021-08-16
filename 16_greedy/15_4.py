import sys

cal = sys.stdin.readline().strip()
num = cal.replace('+', ' ')
num = num.replace('-', ' ')
num = list(map(int, num.split(' ')))
addsub = []

for i in range(len(cal)):
	if cal[i] == '-' or cal[i] == '+':
		addsub.append(cal[i])

def first(arr):
	for i in range(len(arr)):
		if arr[i] == '-':
			return (i + 1)
	return (-1)

def mini(num, first):
	if (first == -1):
		return (sum(num))
	else:
		return (sum(num[:first]) - sum(num[first:]))

print(mini(num, first(addsub)))