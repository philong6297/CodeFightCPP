/*
Given a reduced improper fraction output it as a reduced mixed fraction.

Example

For a = [7, 2], the output should be
improperFractionToMixed(a) = [3, 1, 2].

Explanation: 7/2 = 3 + 1/2.
*/

std::vector<int> improperFractionToMixed(std::vector<int> a) {

	std::vector<int> b(3);
	b[0] = a[0] / a[1], b[1] = 0, b[2] = 0;
	b[1] = a[0] - a[1] * b[0];
	b[2] = a[1];

	return b;
}
