/*
Given an array of integers, find the maximal absolute difference between any two of its adjacent elements.

Example

For inputArray = [2, 4, 1, 0], the output should be
arrayMaximalAdjacentDifference(inputArray) = 3.
*/

int arrayMaximalAdjacentDifference(std::vector<int> inputArray) {
	int ret = abs(inputArray[0] - inputArray[1]);
	for (int i = 2; i<size(inputArray); i++)
		ret = max(ret, abs(inputArray[i] - inputArray[i - 1]));
	return ret;
}
