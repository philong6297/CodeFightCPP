/*
Call an integer an increasing digits sequence if its digits considered from left to right form a strictly increasing sequence.

Given an integer, check if it is an increasing digits sequence.

Example

For n = 12345, the output should be
isIncreasingDigitsSequence(n) = true;
For n = 2446, the output should be
isIncreasingDigitsSequence(n) = false;
For n = 543, the output should be
isIncreasingDigitsSequence(n) = false.
*/
bool isIncreasingDigitsSequence(int n) {
	int pre = n % 10;
	while (n) {
		n /= 10;
		if (pre <= n % 10) return false;
		pre = n % 10;
	}
	return true;
}
