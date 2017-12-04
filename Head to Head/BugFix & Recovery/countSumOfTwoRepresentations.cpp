﻿/*
Given integers n, l and r, find the number of ways to represent n as a sum of two integers A and B such that l ≤ A ≤ B ≤ r.

Example

For n = 6, l = 2 and r = 4, the output should be
countSumOfTwoRepresentations(n, l, r) = 2.
These ways are: 2 + 4 = 6 and 3 + 3 = 6.
*/

int countSumOfTwoRepresentations(int n, int l, int r) {
	int result = 0;

	for (int a = l; a <= r; a++) {
		for (int b = a; b <= r; b++) {
			if (a + b == n) {
				result++;
			}
		}
	}

	return result;
}
