fibo_dp = [0 for _ in range(1000001)]

fibo_dp[0] = 1
fibo_dp[1] = 2

for i in range(2, 1000000, 1):
	fibo_dp[i] = (fibo_dp[i - 1] + fibo_dp[i - 2]) % 15746

n = int(input())
print(fibo_dp[n - 1])