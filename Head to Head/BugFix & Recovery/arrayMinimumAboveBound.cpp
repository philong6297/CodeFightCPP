/*
Given an array of integers inputArray and an integer bound, find the smallest array element strictly greater than bound.

Example

For inputArray = [1, 3, 5, 4, 2, 6] and bound = 3, the output should be
arrayMinimumAboveBound(inputArray, bound) = 4.
*/

int arrayMinimumAboveBound(std::vector<int> inputArray, int bound) {

	int best = -1;
	for (int i = 0; i < inputArray.size(); i++) {
		if (inputArray[i] > bound &&
			(best == -1 || inputArray[i] < best)) {
			best = inputArray[i];
		}
	}

	return best;
}
