/*
Swap two halves of a given array.

Example

For inputArray = [1, 3, 2, 1], the output should be
swapArrayHalves(inputArray) = [2, 1, 1, 3].
*/
std::vector<int> swapArrayHalves(std::vector<int> inputArray) {

	for (int i = 0; i < inputArray.size() / 2; i++) {
		int tmp = inputArray[i];
		inputArray[i] = inputArray[i + inputArray.size() / 2];
		inputArray[i + inputArray.size() / 2] = tmp;
	}
	return inputArray;
}
