/*
Given an integer, find its kth digit.

Example

For n = 578943 and k = 2, the output should be
kthDigit(n, k) = 7.
*/
int kthDigit(int n, int k) {
	int numDigits = 0, number = n;
	while (number != 0) {
		numDigits++;
		number /= 10;
	}

	int indexFromLast = numDigits - k + 1;

	while (n != 0) {
		if (--indexFromLast == 0) {
			return n % 10;
		}
		n /= 10;
	}

	return -1;
}
