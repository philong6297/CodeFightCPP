/*
Let's call an array sorted if its elements are arranged in a non-decreasing order. Given two sorted arrays, merge them.

Example

For a = [1, 2, 2, 4] and b = [2, 3, 4], the output should be
mergeArrays(a, b) = [1, 2, 2, 2, 3, 4, 4].
*/
std::vector<int> mergeArrays(std::vector<int> a, std::vector<int> b) {

	std::vector<int> result;
	int i, j;

	for (i = 0, j = 0; i<size(a) && j<size(b); ) {
		if (a[i] < b[j]) {
			result.push_back(a[i]);
			i++;
		}
		else {
			result.push_back(b[j]);
			j++;
		}
	}

	while (i < a.size()) {
		result.push_back(a[i]);
		i++;
	}

	while (j < b.size()) {
		result.push_back(b[j]);
		j++;
	}

	return result;
}
