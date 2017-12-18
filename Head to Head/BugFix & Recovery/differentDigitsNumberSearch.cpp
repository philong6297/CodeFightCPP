/*
Given an array of integers, find the leftmost number that has a decimal representation which doesn't contain any digit more than once. If there is no such number, return -1 instead.

Example

For inputArray = [22, 111, 101, 124, 33, 30], the output should be
differentDigitsNumberSearch(inputArray) = 124;
For inputArray = [1111, 404], the output should be
differentDigitsNumberSearch(inputArray) = -1.
*/
int differentDigitsNumberSearch(std::vector<int> inputArray) {

	for (int i = 0; i < inputArray.size(); i++) {
		int cur = inputArray[i];
		std::vector<bool> was(10, false);
		bool ok = true;
		while (cur > 0) {
			if (was[cur % 10]) {
				ok = false;
				break;
			}
			was[cur % 10] = true;
			cur /= 10;
		}
		if (ok) {
			return inputArray[i];
		}
	}

	return -1;
}
