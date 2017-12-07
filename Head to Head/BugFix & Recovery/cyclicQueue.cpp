/*
You are working with a machine that resembles a queue. It supports two operations: add an element to the back of the queue and remove an element from the front of the queue. The machine recognizes the following commands:

"+N" (N ≥ 0) - add N to the back of the queue;
"-" - remove an element from the front of the queue.
Given an array of commands, return an array of sums of all elements in the queue after each operation the machine performs.

It is guaranteed that the second type operation is never applied to an empty queue. Sum of an empty queue is equal to 0.
It is guaranteed that each command is recognizable by the machine.
It is also guaranteed that the queue will not have more than 10 elements in it at any moment.

Example

For commands = ["+1", "+2", "-", "+3"], the output should be
cyclicQueue(commands) = [1, 3, 2, 5].
*/

std::vector<int> cyclicQueue(std::vector<std::string> commands) {

	const int maxSize = 10;
	std::vector<int> myQueue(maxSize, 0);
	std::vector<int> answer;
	int head = 0;
	int tail = 0;
	int sum = 0;

	for (int i = 0; i < commands.size(); i++) {
		if (commands[i] == "-") {
			sum -= myQueue[head];
			head = (head + 1) % maxSize;
		}
		else {
			int value = 0;
			for (int j = 1; j < commands[i].size(); j++) {
				value = value * 10 + int(commands[i][j]) - int('0');
			}
			sum += value;
			myQueue[tail] = value;
			tail = (tail + 1) % maxSize;
		}
		answer.push_back(sum);
	}

	return answer;
}
