/*
Find all distinct prime factors of a given integer.

Example

For n = 100, the output should be
primeFactors2(n) = [2, 5].
*/
std::vector<int> primeFactors2(int n) {
	std::vector<int> factors;
	int divisor = 2;

	while (n != 1) {
		if (n % divisor == 0) {
			factors.push_back(divisor);
		}
		while (n % divisor == 0) {
			n /= divisor;
		}
		divisor++;
	}

	return factors;
}
