/*
Given an array of integers, find the product of its elements.

Example

For inputArray = [1, 3, 2, 10], the output should be
arrayElementsProduct(inputArray) = 60.
*/
int arrayElementsProduct(std::vector<int> inputArray) {

	int result = inputArray[0];

	for (int i = 1; i < inputArray.size(); i++) {
		result *= inputArray[i];
	}
	return result;
}
