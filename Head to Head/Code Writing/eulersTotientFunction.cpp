/*
Given an integer n, find the value of phi(n), where phi is Euler's totient function.

Example

For n = 5, the output should be
eulersTotientFunction(n) = 4.
*/
int eulersTotientFunction(int n) {
	int count = 0;
	for (int i = 1; i <= n; i++)
		if (gcd(n, i) == 1)
			count++;
	return count;
}
