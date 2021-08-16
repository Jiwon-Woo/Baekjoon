import sys
w = [[[0 for _ in range(20)] for _ in range(20)] for _ in range(20)]

def	func(a, b, c):
	if (a <= 0 or b <= 0 or c <= 0):
		return(1)
	elif (a > 20 or b > 20 or c > 20):
		return(func(20, 20, 20))
	elif (a < b and b < c):
		if (w[a - 1][b - 1][c - 1] == 0):
			w[a - 1][b - 1][c - 1] = func(a, b, c-1) + func(a, b-1, c-1) - func(a, b-1, c)
		return(w[a - 1][b - 1][c - 1])
	else:
		if (w[a - 1][b - 1][c - 1] == 0):
			w[a - 1][b - 1][c - 1] = func(a-1, b, c) + func(a-1, b-1, c) + func(a-1, b, c-1) - func(a-1, b-1, c-1)
		return(w[a - 1][b - 1][c - 1])


while (1):
	abc = list(map(int, input().split()))
	if (abc == [-1, -1, -1]):
		sys.exit()
	print("w(%s, %s, %s) = %s" %(abc[0], abc[1], abc[2], func(abc[0], abc[1], abc[2])))
