/*
Given array of integers, find the maximal possible sum of some of its k consecutive elements.

Example

For inputArray = [2, 3, 5, 1, 6] and k = 2, the output should be
arrayMaxConsecutiveSum(inputArray, k) = 8.
All possible sums of 2 consecutive elements are:

2 + 3 = 5;
3 + 5 = 8;
5 + 1 = 6;
1 + 6 = 7.
Thus, the answer is 8.
*/
int arrayMaxConsecutiveSum(std::vector<int> inputArray, int k) {

	int result = 0,
		currentSum = 0;

	for (int i = 0; i < k - 1; i++) {
		currentSum += inputArray[i];
	}
	for (int i = k - 1; i < inputArray.size(); i++) {
		currentSum += inputArray[i];
		if (currentSum > result) {
			result = currentSum;
		}
		currentSum -= inputArray[i - k + 1];
	}

	return result;
}
