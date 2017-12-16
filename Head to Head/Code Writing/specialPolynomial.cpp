/*
Given integers x and n, find the largest integer k such that x0+x1+x2+...+xk ≤ n.

Example

For x = 2 and n = 5, the output should be
specialPolynomial(x, n) = 1.

We have 20 + 21 < 5 and 20 + 21 + 22 > 5.
*/
int specialPolynomial(int x, int n) {
	int k = 1;
	int value = 1;
	while (value <= n) {
		value += pow(x, k);
		k++;
	}
	return k - 2;
}
