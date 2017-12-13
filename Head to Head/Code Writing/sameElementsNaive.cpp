/*
Find the number of elements that are contained in both of the given arrays.

Example

For a = [1, 2, 3] and b = [3, 4, 5], the output should be
sameElementsNaive(a, b) = 1.
*/
int sameElementsNaive(std::vector<int> a, std::vector<int> b) {
	sort(begin(a), end(a));
	sort(begin(b), end(b));
	vector<int> ret;
	set_intersection(begin(a), end(a), begin(b), end(b), back_inserter(ret));
	return size(ret);
}
