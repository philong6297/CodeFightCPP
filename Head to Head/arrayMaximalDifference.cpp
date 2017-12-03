#include "Header.h"
/*
Given an array of integers, find the maximal difference among all possible pairs of its elements.
*/
int arrayMaximalDifference(std::vector<int> inputArray) {
	sort(begin(inputArray), end(inputArray));
	return inputArray.back() - inputArray[0];

}
