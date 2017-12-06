/*
Given a positive integer that's a square of some number find its square root.

Example

For n = 25, the output should be
mySqrt(n) = 5.
*/

int mySqrt(int n) {

	int left = 1, right = n + 1;
	while (left + 1 < right) {
		int middle = (left + right) / 2;
		if (middle * middle <= n) {
			left = middle;
		}
		else {
			right = middle;
		}
	}

	return left;
}
