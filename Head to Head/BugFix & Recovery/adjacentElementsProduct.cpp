/*
Given an array of integers, find the pair of adjacent elements that has the largest product and return that product.

Example

For inputArray = [3, 6, -2, -5, 7, 3], the output should be
adjacentElementsProduct(inputArray) = 21.

7 and 3 produce the largest product.
*/

int adjacentElementsProduct(std::vector<int> inputArray) {

	int best = inputArray[0] * inputArray[1],
		cur = best;
	for (int i = 1; i < (int)inputArray.size() - 1; i++) {
		cur = inputArray[i] * inputArray[i + 1];
		if (best < cur) {
			best = cur;
		}
	}

	return best;
}
