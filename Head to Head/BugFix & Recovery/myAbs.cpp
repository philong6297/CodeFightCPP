/*
Find the absolute value of the given integer.

Example

For value = -10, the output should be
myAbs(value) = 10;
For value = 10, the output should be
myAbs(value) = 10.
*/
int myAbs(int value) {
	if (value < 0) {
		return -value;
	}
	return value;
}
