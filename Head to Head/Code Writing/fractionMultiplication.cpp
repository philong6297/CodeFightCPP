/*
Implement a function that can multiply two fractions and produce a reduced fraction.

Example

For a = [3, 2] and b = [2, 5], the output should be
fractionMultiplication(a, b) = [3, 5].
*/
std::vector<int> fractionMultiplication(std::vector<int> a, std::vector<int> b) {
	int div = gcd(a[0] * b[0], a[1] * b[1]);
	return { a[0] * b[0] / div,a[1] * b[1] / div };
}
