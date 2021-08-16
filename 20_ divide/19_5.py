import sys

n, k = map(int, sys.stdin.readline().split())

def	fact_mod(n):
	dp = [1 for _ in range(n + 1)]
	for i in range(2, n + 1):
		dp[i] = (i * dp[i - 1]) % 1000000007
	return dp

def	power_mod(a, b):
	if a == 0 or a == 1:
		return 1
	if b == 0:
		return 1
	if b == 1:
		return a
	temp = power_mod(a, b // 2) % 1000000007
	return ((temp ** 2) * power_mod(a, b % 2)) % 1000000007

def combi_mod(n, k):
	if n == 1 or k == 0:
		return 1
	dp = fact_mod(n)
	n_fact = dp[n]
	n_k_fact = dp[n - k] * dp[k]
	return dp[n] * power_mod(n_k_fact, 1000000007 - 2) % 1000000007

print(combi_mod(n, k))