/*
The positive integer n is given. How many solutions in positive integers does the following equation have:

1 / n = 1 / a + 1 / b ?
Example

For n = 2, the output should be
numberOfSolutions(n) = 3.

Note:
For n = 2 solutions (a, b) = (3, 6) and (a, b) = (6, 3) are different.
*/
int numberOfSolutions(int n) {

	int result = 0;
	for (int a = n + 1; a < 2 * n; a++) {
		if ((a * n) % (a - n) == 0) {
			result++;
		}
	}

	return result * 2 + 1;
}