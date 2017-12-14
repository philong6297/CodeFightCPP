/*
Given three integers k, l and r return the number of integers between l and r inclusive that have exactly k divisors.

It is guaranteed that l ≤ r.

Example

For k = 3, l = 2 and r = 49, the output should be
divNumber(k, l, r) = 4.

We have 4 integers in that range that have exactly 3 divisors - 4, 9, 25, 49.
*/
int divNumber(int k, int l, int r) {
	auto countDiv = [](int n)->int {
		if (n<2) return n == 1;
		int ret = 2;
		for (int i = 2; i<n; i++)
			ret += n % i == 0;
		return ret;
	};
	int count = 0;
	while (l <= r)
		count += countDiv(l++) == k;
	return count;
}
