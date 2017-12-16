/*
Implement a function that can divide two fractions and produce a reduced fraction.

Example

For a = [2, 3] and b = [5, 6], the output should be
fractionDivision(a, b) = [4, 5].
*/
std::vector<int> fractionDivision(std::vector<int> a, std::vector<int> b) {
	int div = gcd(a[0] * b[1], a[1] * b[0]);
	return { a[0] * b[1] / div,a[1] * b[0] / div };
}
