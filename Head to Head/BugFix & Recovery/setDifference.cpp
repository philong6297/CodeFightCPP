/*
Find the difference of the given sets (a \ b).

Example

For a = [1, 2, 4] and b = [3, 4], the output should be
setDifference(a, b) = [1, 2].
*/
std::vector<int> setDifference(std::vector<int> a, std::vector<int> b) {

	std::sort(a.begin(), a.end());
	std::sort(b.begin(), b.end());
	std::vector<int> C;

	int pos_b = 0;
	for (int pos_a = 0; pos_a < a.size(); pos_a++) {
		while (pos_b < b.size() && b[pos_b] < a[pos_a]) {
			pos_b++;
		}
		if (a[pos_a] != b[pos_b]) {
			C.push_back(a[pos_a]);
		}
	}

	return C;
}
