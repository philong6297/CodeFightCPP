/*
Define GCPD (Greatest Common Prime Divisor) as the largest prime number that divides both given positive integers. Your task is to find GCPD of the given integers a and b.

Example

For a = 12 and b = 18, the output should be
greatestCommonPrimeDivisor(a, b) = 3;
For a = 12 and b = 13, the output should be
greatestCommonPrimeDivisor(a, b) = -1.
*/
int greatestCommonPrimeDivisor(int a, int b) {

	int gcd = -1;
	for (int divisor = 2; a > 1 && b > 1; divisor++) {
		if (a % divisor == 0 && b % divisor == 0) {
			gcd = divisor;
		}
		while (a % divisor == 0) {
			a /= divisor;
		}
		while (b % divisor == 0) {
			b /= divisor;
		}
	}

	return gcd;
}
