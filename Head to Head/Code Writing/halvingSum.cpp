/*
Given a positive integer n, calculate the following sum: n + n/2 + n/4 + n/8 + .... All divisions are integer.

Example

For n = 25, the output should be
halvingSum(n) = 47.

The sum to be calculated is 25 + 12 + 6 + 3 + 1, which is 47.
*/
int halvingSum(int n) {
	int div = 1;
	int ret = 0;
	while (n / div) {
		ret += n / div;
		div *= 2;
	}
	return ret;
}
