/*
Find the largest digit of the given number.

Example

For n = 111, the output should be
maxDigit(n) = 1;
For n = 132, the output should be
maxDigit(n) = 3.
*/
int maxDigit(int n) {

	int result = 0;
	while (n) {
		result = max(result, n % 10);
		n /= 10;
	}

	return result;
}
