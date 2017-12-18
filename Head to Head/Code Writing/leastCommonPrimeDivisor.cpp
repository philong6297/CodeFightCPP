/*
Calculate the LCPD (least common prime divisor) of two numbers.

Example

For a = 12 and b = 13, the output should be
leastCommonPrimeDivisor(a, b) = -1;
For a = 12 and b = 18, the output should be
leastCommonPrimeDivisor(a, b) = 2.
*/
int leastCommonPrimeDivisor(int a, int b) {
	for (int i = 2; i <= ((a>b) ? b : a); i++)
		if (a%i == 0 && b%i == 0) return i;
	return -1;
}

