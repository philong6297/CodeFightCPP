/*
Given a sequence, check whether it is cyclic increasing.

Example

For sequence = [5, 9, 1, 2, 4], the output should be
cyclicSequence(sequence) = true.

Increasing sequence can be started from number 1.

For sequence = [1, 3, 2], the output should be
cyclicSequence(sequence) = false.
*/
bool cyclicSequence(std::vector<int> sequence) {

	bool found = false;
	int st = -1;
	for (size_t i = 1; i < sequence.size(); i++) {
		if (sequence[i] == sequence[i - 1]) {
			return false;
		}
		if (sequence[i - 1] > sequence[i]) {
			if (found) {
				return false;
			}
			found = true;
			st = static_cast<int>(i);
		}
	}
	return st != -1 && sequence[0] > sequence.back() || st == -1;
}
