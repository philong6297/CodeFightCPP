/*
Find the smallest round number that is not less than a given value.

Example

For value = 122, the output should be
nearestRoundNumber(value) = 130.
*/

int nearestRoundNumber(int value) {
	return 10 * (value / 10) + 10 * (value % 10 != 0);
}
