/*
Find the perimeter of a square with given sides.

Example

For n = 1, the output should be
squarePerimeter(n) = 4.
*/
int squarePerimeter(int n) {
	int result = n;
	for (int i = 0; i < 3; i++) {
		result += n;
	}
	return result;
}
