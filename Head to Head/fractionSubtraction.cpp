#include "Header.h"
/*
Implement a function that can subtract two reduced fractions and produce a new one.

Example

For a = [7, 10] and b = [3, 10], the output should be
fractionSubtraction(a, b) = [2, 5].

7/10 - 3/10 = 4/10 = 2/5, so the answer is [2, 5].
*/
std::vector<int> fractionSubtraction(std::vector<int> a, std::vector<int> b) {

	struct Helper {
		int gcdEuclid(int a, int b) {
			if (a == 0) {
				return b;
			}
			return gcdEuclid(b % a, a);
		}
	};
	Helper h;

	std::vector<int> c(2);
	c[0] = a[0] * b[1] - a[1] * b[0], c[1] = a[1] * b[1];
	int gcd = h.gcdEuclid(c[0], c[1]);

	c[0] /= gcd;
	c[1] /= gcd;

	return c;
}