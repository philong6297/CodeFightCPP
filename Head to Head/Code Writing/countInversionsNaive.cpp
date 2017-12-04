//Given an array of integers, find the number of inversions it contains.
//
//Example
//
//For inputArray = [1, 3, 2, 0], the output should be
//countInversionsNaive(inputArray) = 4.

int countInversionsNaive(std::vector<int> inputArray) {
	int cnt = 0;
	for (int i = 0; i<size(inputArray); i++)
		for (int j = i + 1; j<size(inputArray); j++)
			if (inputArray[i] > inputArray[j]) cnt++;
	return cnt;

}