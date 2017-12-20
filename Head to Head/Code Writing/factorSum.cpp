/*
Consider the following operation - we take a positive integer n and replace it with the sum of its prime factors (if a prime number is presented multiple times in the factorization of n, then it's counted the same number of times in the sum). This operation is applied sequentially first to the given number, then to the first result, then to the second result and so on, until the result remains the same.

Given any number, find the final result of the operation.

Example

For n = 24, the output should be
factorSum(n) = 5.

24 -> (2 + 2 + 2 + 3) = 9 -> (3 + 3) = 6 -> (2 + 3) = 5 -> 5.
So the answer for n = 24 is 5.
*/
int factorSum(int n) {
	vector<bool> prime(n + 1, true);
	for (int i = 2; i <= n; i++)
		if (prime[i])
			for (int p = i * 2; p <= n; p += i)
				prime[p] = false;
	while (true) {
		int temp = n;
		int facSum = 0;
		for (int i = 2; i <= temp; i++)
			if (prime[i])
				while (temp>1 && temp%i == 0)
					facSum += i, temp /= i;
		if (n == facSum)
			return facSum;
		n = facSum;
	}
}
