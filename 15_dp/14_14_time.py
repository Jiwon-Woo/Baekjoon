import sys
s1 = sys.stdin.readline().strip()
s2 = sys.stdin.readline().strip()

seq = []

for i in range(len(s1)):
	temp = []
	for j in range(len(s2)):
		if (s1[i] == s2[j]):
			temp.append(j)
	if (len(temp) != 0):
		seq.append(temp)
	del temp

sub = seq[:]

for i in range(len(seq) - 1, -1, -1):
	maxi = 0
	for a in range(len(seq[i])):
		for j in range(i + 1, len(seq)):
			for b in range(len(seq[j])):
				if seq[i][a] > seq[j][b]:
					maxi = max(maxi, sub[j][b])
		sub[i][a] = maxi + 1

print(max(map(max, sub)))
		