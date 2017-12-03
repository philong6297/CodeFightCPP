#include "Header.h"
/*
Given array of integers, find the 0-based index of its minimal element.

Example

For inputArray = [19, 32, 11, 23], the output should be
arrayMinimumIndex(inputArray) = 2.
*/
int arrayMinimumIndex(std::vector<int> inputArray) {

	int indexOfMinimum = 0;
	for (int i = 1; i < inputArray.size(); i++) {
		if (inputArray[i] < inputArray[indexOfMinimum]) {
			indexOfMinimum = i;
		}
	}
	return indexOfMinimum;
}
