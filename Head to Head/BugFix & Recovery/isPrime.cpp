/*
Implement a function that determines if a given positive integer is a prime or not.

Example

For n = 47, the output should be
isPrime(n) = true;
For n = 4, the output should be
isPrime(n) = false.
*/
bool isPrime(int n) {
	int divisor = 2;
	while (n > divisor) {
		if (n % divisor == 0) {
			return false;
		}
		else {
			divisor++;
		}
	}
	return true;
}
