n = int(input())
k = int(input())

def solution(n, k):
	start = 1
	end = n * n
	while end > start:
		mid = (start + end) // 2
		count = 0
		for i in range(1, n + 1):
			count += min(mid // i, n)
		if count >= k:
			end = mid
		else:
			start = mid + 1
	return (start)


print(solution(n, k))