/*
Find the value of base raised to the power of exponent (base exponent).

Example

For base = 2 and exponent = 3, the output should be
powerRecursive(base, exponent) = 8.
*/
int powerRecursive(int base, int exponent) {
	if (exponent == 0) {
		return 1;
	}
	else {
		return  pow(base, exponent);
	}
}

