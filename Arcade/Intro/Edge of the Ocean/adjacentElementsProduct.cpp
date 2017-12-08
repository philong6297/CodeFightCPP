/*
Given an array of integers, find the pair of adjacent elements that has the largest product and return that product.

Example

For inputArray = [3, 6, -2, -5, 7, 3], the output should be
adjacentElementsProduct(inputArray) = 21.

7 and 3 produce the largest product.
*/

int adjacentElementsProduct(std::vector<int> inputArray)
{
	int ret = inputArray[0] * inputArray[1];
	for (int i = 1; i<size(inputArray) - 1; i++)
		ret = max(ret, inputArray[i] * inputArray[i + 1]);
	return ret;
}