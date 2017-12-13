/*
You are given an array of integers. On each move you are allowed to increase exactly one of its element by one. Find the minimal number of moves required to obtain a strictly increasing sequence from the input.

Example

For inputArray = [1, 1, 1], the output should be
arrayChange(inputArray) = 3.
*/

int arrayChange(std::vector<int> inputArray) {
	int ret = 0;
	for (int i = 1; i<size(inputArray); i++)
		if (inputArray[i] <= inputArray[i - 1])
			ret += inputArray[i - 1] - inputArray[i] + 1,
			inputArray[i] = inputArray[i - 1] + 1;
	return ret;
}
