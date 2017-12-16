/*
Given array of integers, for each position i, search among the previous positions for the last (from the left) position that contains a smaller value. Store this value at position i in the answer. If no such value can be found, store -1 instead.

Example

For items = [3, 5, 2, 4, 5], the output should be
arrayPreviousLess(items) = [-1, 3, -1, 2, 4].
*/
std::vector<int> arrayPreviousLess(std::vector<int> items) {
	vector<int> ret;
	for (int i = 0; i<size(items); i++) {
		int found = -1;
		for (int j = i - 1; j >= 0; j--)
			if (items[j]<items[i]) {
				found = items[j];
				break;
			}
		ret.push_back(found);
	}
	return ret;
}
