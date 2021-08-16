import sys

n = int(input())
dis = list(map(int, sys.stdin.readline().split()))
fuel = list(map(int, sys.stdin.readline().split()))
mini = fuel.index(min(fuel[:len(fuel) - 1]))

def station(dis, fuel, mini):
	temp = fuel[0]
	for i in range(mini):
		temp = min(temp, fuel[i])
		fuel[i] = temp
	cost = 0
	for i in range(mini):
		cost += dis[i] * fuel[i]
	cost += sum(dis[mini:]) * fuel[mini]
	return cost

print(station(dis, fuel, mini))