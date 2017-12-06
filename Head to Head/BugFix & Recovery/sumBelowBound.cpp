﻿/*
Given an integer bound, find the maximal integer n such that 1 + 2 + ... + n ≤ bound.

Example

For bound = 14, the output should be
sumBelowBound(bound) = 4.
*/
int sumBelowBound(int bound) {

	int left = 0,
		right = bound + 1;
	while (right - left > 1) {
		int middle = (left + right) / 2;
		if (middle * (middle + 1) / 2 <= bound) {
			left = middle;
		}
		else {
			right = middle;
		}
	}

	return left;
}
