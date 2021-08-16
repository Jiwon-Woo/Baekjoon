t = int(input())
n = [int(input()) for _ in range(t)]
fibo_dp = [0 for _ in range(41)]

def fibo(index):
	if (index == 0):
		fibo_dp[0] = 0
	elif (index == 1):
		fibo_dp[1] = 1
	else:
		if (fibo_dp[index] == 0):
			fibo_dp[index] = fibo(index - 1) + fibo(index - 2)
	return(fibo_dp[index])

for i in range(t):
	if (n[i] == 0):
		zero = 1
		one = 0
	else:
		fibo(n[i])
		zero = fibo_dp[n[i] - 1]
		one = fibo_dp[n[i]]
	print(zero, one)