/*
Define d(k) as the sum of proper divisors of k.

A positive integer a is called an amicable number if there exists another positive integer b (b ≠ a) such that d(a) = b and d(b) = a (numbers a and b form an amicable pair).

Find the smallest amicable number not less than the given integer.

Example

For n = 1, the output should be
amicableNumbers(n) = 220;
For n = 200, the output should be
amicableNumbers(n) = 220;
For n = 221, the output should be
amicableNumbers(n) = 284.
The two smallest amicable numbers are 220 and 284.
*/
int amicableNumbers(int n) {
	int temp;
	auto sumDiv = [](int value)->int {
		int sum = 1;
		for (int i = 2; i <= sqrt(value); i++)
			if (value%i == 0) {
				sum += i;
				if (value / i != i)
					sum += value / i;
			}
		return sum;
	};
	for (int a = max(220, n);; a++) {
		int b = sumDiv(a);
		if (b != a && sumDiv(b) == a)
			return a;
	}
}