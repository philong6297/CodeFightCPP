#include "Header.h"
/*
Given an array of integers, find the product of its elements.
*/
int arrayElementsProduct(std::vector<int> inputArray) {
	return std::accumulate(inputArray.begin(), inputArray.end(), 1, std::multiplies<int>());
}
