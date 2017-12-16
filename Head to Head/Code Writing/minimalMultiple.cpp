/*
Find the smallest multiple of the given number that's not less than a specified lower bound.

Example

For divisor = 5 and lowerBound = 12, the output should be
minimalMultiple(divisor, lowerBound) = 15.
*/
int minimalMultiple(int divisor, int lowerBound) {
	return (lowerBound / divisor + (lowerBound%divisor > 0))*divisor;
}
