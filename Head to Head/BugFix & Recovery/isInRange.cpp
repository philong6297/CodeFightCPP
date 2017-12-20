/*
Write a function that determines if a number b is in a given range [a, c].

Example

For a = 3, b = 2 and c = 4, the output should be
isInRange(a, b, c) = false;
For a = 0, b = 1 and c = 1, the output should be
isInRange(a, b, c) = true.
*/
bool isInRange(int a, int b, int c) {
	if (a <= b && b <= c) {
		return true;
	}
	return false;
}
