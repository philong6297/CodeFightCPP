/*
The algorithm should return the smallest non-negative integer of N digits length.

Example

For n = 2, the output should be
smallestNumber(n) = 10.
*/
int smallestNumber(int n) {
	return n == 1 ? 0 : (int)pow(10, n - 1);
}
