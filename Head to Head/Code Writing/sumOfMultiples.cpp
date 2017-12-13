/*
For given n and k find the sum of all multiples of k that are not greater than n.

Example

For n = 7 and k = 2, the output should be
sumOfMultiples(n, k) = 12.

Explanation: 2 + 4 + 6 = 12.
*/
int sumOfMultiples(int n, int k) {
	int ret = 0, i = k;
	while (k <= n)
		ret += k, k += i;
	return ret;
}
