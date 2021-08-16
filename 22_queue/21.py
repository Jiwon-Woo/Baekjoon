def solution(bridge_length, weight, truck_weights):
	answer = 0
	bridge = []
	after = []
	truck = len(truck_weights)
	print(answer, after, bridge, truck_weights)
	while truck_weights:
		while (truck_weights and len(bridge) < bridge_length and sum(bridge) + truck_weights[0] <= weight):
			if not (len(after) != 0 and len(bridge) == 0):
				answer += 1
			if (len(bridge) > 0):
				answer -= 1
			bridge.append(truck_weights.pop(0))
			print(answer, after, bridge, truck_weights)
		after.append(bridge.pop(0))
		answer += bridge_length
		print(answer, after, bridge, truck_weights)
	while len(after) != truck:
		answer += 1
		after.append(bridge.pop(0))
		print(answer, after, bridge, truck_weights)
	return answer

print(solution(100, 90, [10, 10, 10, 10, 10, 10, 10, 10, 10, 10]))