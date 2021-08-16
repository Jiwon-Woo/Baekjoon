import sys

n = int(input())
case = [int(sys.stdin.readline().strip()) for i in range(n)]

if n == 1:
	print(case[0])
	sys.exit(0)

score = [case[0], case[0] + case[1], case[1]]
trace = [0, 1, 2]

for i in range(2, n, 1):
	temp_trace = []
	temp_score = []
	for j in range(len(score)):
		if trace[j] == 0:
			temp_trace.append(2)
			temp_score.append(score[j] + case[i])
		elif trace[j] == 1:
			temp_trace.append(0)
			temp_score.append(score[j])
		else:
			temp_trace.append(0)
			temp_score.append(score[j])
			temp_trace.append(1)
			temp_score.append(score[j] + case[i])
	trace = temp_trace
	score = temp_score
	del temp_trace
	del temp_score


valid = []

for i in range(len(trace)):
	if trace[i] != 0:
		valid.append(score[i])

print(max(valid))
