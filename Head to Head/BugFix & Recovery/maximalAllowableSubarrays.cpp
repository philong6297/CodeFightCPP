﻿/*
Given an array of integers inputArray and an integer maxSum, for each i (0 ≤ i < length of inputArray) find the rightmost j (j < length of inputArray) such that the sum of all elements between the ith and jth elements (both inclusive) is not greater than maxSum.

Example

For inputArray = [2, 3, 0, 1, 2] and maxSum = 4, the output should be
maximalAllowableSubarrays(inputArray, maxSum) = [0, 3, 4, 4, 4].
*/
std::vector<int> maximalAllowableSubarrays(std::vector<int> inputArray,
	int maxSum) {

	std::vector<int> right(inputArray.size());
	int j = -1;
	int curSum = 0;
	for (int i = 0; i < inputArray.size(); i++) {
		if (i > 0) {
			curSum -= inputArray[i - 1];
		}
		while (curSum + inputArray[j + 1] <= maxSum && j + 1 < size(inputArray)) {
			curSum += inputArray[++j];
		}
		right[i] = j;
	}

	return right;
}
