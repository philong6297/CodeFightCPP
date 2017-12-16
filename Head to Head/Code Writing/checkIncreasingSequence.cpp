/*
Given the sequence of integers seq, check if it is strictly increasing.

Example

For seq = [1, 3, 8], the output should be
checkIncreasingSequence(seq) = true;
For seq = [2, 2, 3], the output should be
checkIncreasingSequence(seq) = false.
*/
bool checkIncreasingSequence(std::vector<int> seq) {
	for (int i = 1; i < size(seq); i++)
		if (seq[i] <= seq[i - 1])
			return 0;
	return 1;
}
