/*
Given a sequence determine if it's an arithmetic progression or not.

Example

For sequence = [1, 4, 7], the output should be
isArithmeticProgression(sequence) = true;
For sequence = [2, 4, 7], the output should be
isArithmeticProgression(sequence) = false.
*/
bool isArithmeticProgression(std::vector<int> sequence) {

	int difference = sequence[1] - sequence[0];
	for (int i = 2; i < sequence.size(); i++) {
		if (sequence[i] - sequence[i - 1] != difference) {
			return  false;
		}
	}
	return true;
}
