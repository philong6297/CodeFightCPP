/*
Given array of integers, find the sum of absolute differences of consecutive numbers.

Example

For inputArray = [4, 7, 1, 2], the output should be
arraySumAdjacentDifference(inputArray) = 10.

|4 - 7| = 3;
|7 - 1| = 6;
|1 - 2| = 1
So, the answer is 3 + 6 + 1 = 10.
*/
int arraySumAdjacentDifference(std::vector<int> inputArray) {

	int answer = 0;
	for (int i = 1; i < inputArray.size(); i++) {
		answer += abs(inputArray[i] - inputArray[i - 1]);
	}
	return answer;
}
