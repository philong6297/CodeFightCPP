/*
Given an integer, check that all the digits in the number are the same.

Example

For n = 1111, the output should be
sameDigitNumber(n) = true;
For n = 1122, the output should be
sameDigitNumber(n) = false.
*/
bool sameDigitNumber(int n) {
	int digit = n % 10;
	while (n != 0) {
		if (n % 10 != digit) {
			return false;
		}
		n /= 10;
	}
	return true;
}
