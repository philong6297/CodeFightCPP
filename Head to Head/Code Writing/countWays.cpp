/*
Given integers n and k, find the number of the ways to choose k objects out of n different ones modulo 109 + 7. Note that the order doesn't matter.

Example

For n = 5 and k = 2, the output should be
countWays(n, k) = 10.
Here are all possible ways to choose 2 objects out of 5 if we number them from 1 to 5:

[1, 2], [1, 3], [1, 4], [1, 5],
[2, 3], [2, 4], [2, 5],
[3, 4], [3, 5],
[4, 5]
*/
int countWays(int n, int k) {
	if (k == 0 || k == n)
		return 1;
	const int mod = 1e9 + 7;
	int c[n + 1][k + 1];
	int i, j;
	for (i = 0; i <= n; i++)
		c[i][0] = 1;
	for (j = 0; j <= k; j++)
		c[0][j] = 0;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= k; j++)
			if (i == j)
				c[i][j] = 1;
			else if (j > i)
				c[i][j] = 0;
			else
				c[i][j] = c[i - 1][j - 1] % mod + c[i - 1][j] % mod;
	return c[n][k] % mod;
}
