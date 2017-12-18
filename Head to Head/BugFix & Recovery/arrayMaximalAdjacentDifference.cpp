/*
Given an array of integers, find the maximal absolute difference between any two of its adjacent elements.

Example

For inputArray = [2, 4, 1, 0], the output should be
arrayMaximalAdjacentDifference(inputArray) = 3.
*/
int arrayMaximalAdjacentDifference(std::vector<int> inputArray) {

	int answer = 0;
	for (int i = 1; i < inputArray.size(); i++) {
		if (std::abs(inputArray[i] - inputArray[i - 1]) > answer) {
			answer = abs(inputArray[i] - inputArray[i - 1]);
		}
	}
	return answer;
}
