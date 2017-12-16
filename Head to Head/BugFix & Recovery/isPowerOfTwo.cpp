/*
Determine if the given number is a power of two.

Example

For n = 64, the output should be
isPowerOfTwo(n) = true;
For n = 5, the output should be
isPowerOfTwo(n) = false.
*/
bool isPowerOfTwo(int n) {

	while (n % 2 == 0) {
		n >>= 1;
	}

	if (n == 1) {
		return true;
	}

	return false;
}
