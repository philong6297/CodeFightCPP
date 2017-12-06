/*
Given an integer n, check if n = k! for some non-negative integer k.

Example

For n = 120, the output should be
checkFactorial(n) = true.

Here 120 = 5!.

For n = 25, the output should be
checkFactorial(n) = false.

Here 4! = 24 < 25 < 120 = 5!.
*/

bool checkFactorial(int n) {

	for (int divisor = 2; n != 1; divisor++) {
		if (n % divisor == 0) {
			n /= divisor;
		}
		else {
			return false;
		}
	}
	return true;
}
