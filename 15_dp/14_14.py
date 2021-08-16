import sys
s1 = sys.stdin.readline().strip()
s2 = sys.stdin.readline().strip()

seq = [[0 for _ in range(len(s1) + 1)] for _ in range(len(s2) + 1)]

for i in range(len(s2)):
	for j in range(len(s1)):
		if (s2[i] == s1[j]):
			seq[i + 1][j + 1] = seq[i][j] + 1
		else:
			seq[i + 1][j + 1] = max(seq[i][j + 1], seq[i + 1][j]) 

print(max(seq[len(s2)]))