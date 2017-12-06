/*
Given a sequence of non-negative integers, find its median.

Example

For sequence = [1, 3, 2, 1], the output should be
arrayMedian(sequence) = 1.5;
For sequence = [1, 3, 2], the output should be
arrayMedian(sequence) = 2.
*/

double arrayMedian(std::vector<int> sequence) {
	int len = sequence.size();
	std::sort(sequence.begin(), sequence.end());

	if (len % 2 == 0) {
		return (sequence[len / 2] + sequence[len / 2 - 1]) / 2.0;
	}
	else {
		return sequence[(len + 0) / 2];
	}
}
