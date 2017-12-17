/*
Given an array of integers inputArray and an integer extraElement, remove all the elements which are equal to extraElement from inputArray.

Example

For inputArray = [1, 2, 3, 2, 1, 3, 1, 2] and extraElement = 3, the output should be
myFilter(inputArray, extraElement) = [1, 2, 2, 1, 1, 2].
*/
std::vector<int> myFilter(std::vector<int> inputArray,
	int extraElement) {

	std::vector<int> result;
	for (int i = 0; i < inputArray.size(); i++) {
		if (inputArray[i] == extraElement) {
			continue;
		}
		result.push_back(inputArray[i]);
	}

	return result;
}
