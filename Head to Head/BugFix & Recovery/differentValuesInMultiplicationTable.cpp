/*
Define a multiplication table of size n by m as follows: such table consists of n rows and m columns. Cell on the intersection of the ith row and the jth column (i, j > 0) contains the value of i * j.

Given integers n and m, find the number of different values that are found in the table.

Example

For n = 3 and m = 2, the output should be
differentValuesInMultiplicationTable(n, m) = 5.
*/
int differentValuesInMultiplicationTable(int n, int m) {
	int result = 0;
	for (int value = 1; value <= n * m; value++) {
		for (int i = 1; i <= std::min(n, m); i++) {
			if (value%i == 0 && value / i <= max(n, m)) {
				result++;
				break;
			}
		}
	}
	return result;
}
