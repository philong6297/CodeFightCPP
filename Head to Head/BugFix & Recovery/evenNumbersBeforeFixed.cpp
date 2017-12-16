/*
Given array of integers sequence and some integer fixedElement, output the number of even values in sequence before the first occurrence of fixedElement or -1 if fixedElement is not contained in sequence.

Example

For sequence = [1, 4, 2, 6, 3, 1] and fixedElement = 6, the output should be
evenNumbersBeforeFixed(sequence, fixedElement) = 2.
*/
int evenNumbersBeforeFixed(std::vector<int> sequence, int fixedElement) {

	int result = 0;

	for (int i = 0; i < sequence.size(); i++) {
		if (sequence[i] % 2 == 0 && sequence[i] != fixedElement) {
			result++;
		}
		if (sequence[i] == fixedElement) {
			return result;
		}
	}

	return  -1;
}
