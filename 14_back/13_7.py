cal = [ ]
result = [ ]

def operation(index, number):
	if (index == number):
		rst = num[0]
		length = len(cal)
		for i in range(0, length, 1):
			if (cal[i] == 1):
				rst += num[i + 1]
			elif (cal[i] == 2):
				rst -= num[i + 1]
			elif (cal[i] == 3):
				rst *= num[i + 1]
			elif (cal[i] == 4):
				if (rst < 0):
					rst = -((-rst) // num[i + 1])
				else:
					rst //= num[i + 1]
			else:
				break
		result.append(rst)
		return
	else : 
		for i in range(0, 4, 1):
			if (oper[i] != 0):
				cal.append(i + 1)
				oper[i] -= 1
				operation(index + 1, number)
				cal.pop(index)
				oper[i] += 1

n = int(input())
num = list(map(int, input().split()))
oper = list(map(int, input().split()))
operation(0, n - 1)
print(max(result), min(result), sep='\n')
