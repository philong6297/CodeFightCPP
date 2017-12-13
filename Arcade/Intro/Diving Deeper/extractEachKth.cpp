/*
Given array of integers, remove each kth element from it.

Example

For inputArray = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10] and k = 3, the output should be
extractEachKth(inputArray, k) = [1, 2, 4, 5, 7, 8, 10]
*/
std::vector<int> extractEachKth(std::vector<int> inputArray, int k) {
	vector<int> ret;
	for (int i = 1; i <= size(inputArray); i++)
		if (i%k)
			ret.push_back(inputArray[i - 1]);
	return ret;
}