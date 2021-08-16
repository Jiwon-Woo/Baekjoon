import sys

k = int(input())

account = []
for _ in range(k):
	n = int(sys.stdin.readline().strip())
	if (n == 0):
		account.pop()
	else:
		account.append(n)

print(sum(account))