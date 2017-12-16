/*
Given a string, find the number of pairs of equal characters in neighbouring positions.

Example

For inputString = "abacaba", the output should be
countNeighbouringPairs(inputString) = 0;
For inputString = "aaa", the output should be
countNeighbouringPairs(inputString) = 2.
*/
int countNeighbouringPairs(std::string inputString) {
	int count = 0;
	for (int i = 0; i<size(inputString) - 1; i++)
		if (inputString[i] == inputString[i + 1])
			count++;
	return count;
}
