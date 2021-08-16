import sys

n, m = map(int, sys.stdin.readline().split())

def fact_five(num):
	five = 0
	while num > 0:
		five += num // 5
		num = num // 5
	return (five)

def fact_two(num):
	two = 0
	while num > 0:
		two += num // 2
		num = num // 2
	return (two)

n_fact = [fact_two(n), fact_five(n)]
m_fact = [fact_two(m), fact_five(m)]
diff_fact = [fact_two(n - m), fact_five(n - m)]
answer = [0, 0]

for i in range(2):
	answer[i] = n_fact[i] - m_fact[i] - diff_fact[i]

print(min(answer))