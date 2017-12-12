/*
Return a strictly increasing array of all even numbers between given left and right (both inclusive).

Example

For left = 5 and right = 10, the output should be
onlyEvenNumbers(left, right) = [6, 8, 10].
*/

std::vector<int> onlyEvenNumbers(int left, int right) {
	vector<int> ret;
	while (left <= right) {
		if (!(left & 1))
			ret.push_back(left);
		left++;
	}
	return ret;
}
