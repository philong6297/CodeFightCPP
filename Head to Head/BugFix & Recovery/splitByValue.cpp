/*
For an integer k rearrange all the elements of the given array in such way, that:

all elements that are less than k are placed before elements that are not less than k;
all elements that are less than k remain in the same order with respect to each other;
all elements that are not less than k remain in the same order with respect to each other.
Example

For k = 5 and elements = [1, 3, 5, 7, 6, 4, 2], the output should be
splitByValue(k, elements) = [1, 3, 4, 2, 5, 7, 6].
*/
std::vector<int> splitByValue(int k, std::vector<int> elements) {
	std::vector<int> result;
	for (int i = 0; i < elements.size(); i++) {
		if (elements[i] < k) {
			result.push_back(elements[i]);
		}
	}
	for (int i = 0; i < elements.size(); i++) {
		if (elements[i] >= k) {
			result.push_back(elements[i]);
		}
	}
	return result;
}
