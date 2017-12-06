/*
Find the number of elements that are contained in both of the given arrays.

Example

For a = [1, 2, 3] and b = [3, 4, 5], the output should be
sameElementsNaive(a, b) = 1.
*/
int sameElementsNaive(std::vector<int> a, std::vector<int> b) {

	int result = 0;

	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < b.size(); j++) {
			if (a[i] == b[j]) {
				result++;
			}
		}
	}
	return result;
}
