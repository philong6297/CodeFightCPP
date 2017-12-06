/*
Implement a function that determines if a given positive integer is a prime or not.

Example

For n = 47, the output should be
isPrime(n) = true;
For n = 4, the output should be
isPrime(n) = false.
*/

bool isPrime(int n) {
	vector<bool> prime(n + 1, true);
	for (int p = 2; p*p <= n; p++)
		if (prime[p])
		{
			for (int i = p * 2; i <= n; i += p) {
				prime[i] = false;
			}
		}
	return prime[n];
}
