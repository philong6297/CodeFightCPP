#include "Header.h"
/*
Given an array of integers, find the rightmost round number in it and output its position in the array (0-based). If there are no round numbers in the given array, output -1.

Example

For inputArray = [0, 5, 10, 15], the output should be
rightmostRoundNumber(inputArray) = 2;
For inputArray = [1, 2, 3, 4, 5], the output should be
rightmostRoundNumber(inputArray) = -1.
*/
int rightmostRoundNumber(std::vector<int> inputArray) {
	for (int i = size(inputArray) - 1; i >= 0; i--)
		if (inputArray[i] % 10 == 0)
			return i;
	return -1;
}
