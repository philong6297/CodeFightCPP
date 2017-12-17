/*
Given an array of integers subset and an integer n, find the number of integers between 1 and n, inclusive, whose set of divisors contains subset as a subset.

Example

For subset = [2, 3] and n = 13, the output should be
divisorsSubset(subset, n) = 2.
These integers are 6 and 12.
*/
int divisorsSubset(std::vector<int> subset, int n) {
	int v = subset[0];
	for (int i = 1; i<size(subset); i++)
		v = lcm(v, subset[i]);
	int count = 0;
	while (v*(count + 1) <= n)
		count++;
	return count;
}
