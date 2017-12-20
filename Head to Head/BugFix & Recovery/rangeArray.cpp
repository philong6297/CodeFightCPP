/*
Given integers l, r (l ≤ r), and step, consider the following sequence: l, l + step, l + 2 * step, .... Return an array containing all elements of that sequence that are less than r. Note that they should be stored in the same order as they occur in the sequence.

Example

For l = 1, r = 10 and step = 3, the output should be
rangeArray(l, r, step) = [1, 4, 7].
*/
std::vector<int> rangeArray(int l, int r, int step) {

	std::vector<int> result;
	while (l < r) {
		result.push_back(l);
		l += step;
	}
	return result;
}
