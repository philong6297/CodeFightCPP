﻿/*
Given an integer m, find the sum of all positive integers p such that

2 ≤ p ≤ m
p and m are coprime.
Example

For m = 5, the output should be
sumOfCoprimes(m) = 9.

Explanation: 9 = 2 + 3 + 4.
*/
int sumOfCoprimes(int m) {

	int ans = 0;
	for (int p = 2; p <= m; p++) {
		int a = p;
		int b = m;
		while (a > 0) {
			int tmp = b % a;
			b = a;
			a = tmp;
		}

		if (b == 1) {
			ans += p;
		}
	}

	return ans;
}
