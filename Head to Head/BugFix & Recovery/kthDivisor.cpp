#include "Header.h"
/*
Given integers n and k, find the kth divisor (1-based) of n or determine if n has less than k divisors.

Example

For n = 63 and k = 4, the output should be
kthDivisor(n, k) = 9.

Divisors of number 63 are the following: 1, 3, 7, 9, 21, 63.

For n = 5 and k = 3, the output should be
kthDivisor(n, k) = -1.

Number 5 has only two divisors.
*/
int kthDivisor(int n, int k) {
	std::vector<int> divisors;
	int i = 1;
	while (i * i < n) {
		if (n % i == 0) {
			divisors.push_back(i);
		}
		i++;
	}
	if (i * i > n) {
		i--;
	}
	while (i > 0) {
		if (n % i == 0) {
			divisors.push_back(n / i);
		}
		i--;
	}
	if (divisors.size() < k) {
		return -1;
	}
	return divisors[k - 1];
}
