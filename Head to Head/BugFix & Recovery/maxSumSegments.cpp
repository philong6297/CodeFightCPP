/*
You are given an array of integers inputArray. Consider all its contiguous subarrays of length k and pick the one with the maximum sum. If there are several contiguous subarrays with the maximum sum, pick the leftmost one. Put the 0-based index of the first (leftmost) element of that subarray into result[k - 1]. Do this for all k from 1 up to the length of the inputArray. Return result.

Example

For inputArray = [-1, 2, 1, 3, -2], the output should be
maxSumSegments(inputArray) = [3, 2, 1, 0, 0].
The contiguous subarray of length 1 is the element with index 3, so result[0] = 3; of length 2 is subarray [1, 3], which starts at the index 2; of length 3 is - [2, 1, 3], which starts at index 1; of length 4 - [-1, 2, 1, 3], which starts at index 0; of length 5 is an inputArray itself.
*/
std::vector<int> maxSumSegments(std::vector<int> inputArray) {

	std::vector<int> result;
	for (int i = 1; i <= inputArray.size(); i++) {
		int sum = 0,
			mxSum = 0,
			index = 0;
		for (int j = 0; j < inputArray.size(); j++) {
			sum += inputArray[j];
			if (j >= i) {
				sum -= inputArray[j - i];
			}
			if (j >= i - 1 && sum > mxSum) {
				mxSum = sum;
				index = j - i + 1;
			}
		}
		result.push_back(index);
	}
	return result;
}
