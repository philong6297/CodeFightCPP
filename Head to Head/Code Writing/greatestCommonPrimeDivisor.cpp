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
	for (int d = 2; a > 1 && b > 1; d++) {
		if (a % d == 0 && b % d == 0)
			gcd = d;
		while (a % d == 0)
			a /= d;
		while (b % d == 0)
			b /= d;
	}

	return gcd;
}
