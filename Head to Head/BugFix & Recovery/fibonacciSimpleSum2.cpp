/*
For a given positive integer n determine if it can be represented as a sum of two Fibonacci numbers (possibly equal).

Example

For n = 1, the output should be
fibonacciSimpleSum2(n) = true.

Explanation: 1 = 0 + 1 = F0 + F1.

For n = 11, the output should be
fibonacciSimpleSum2(n) = true.

Explanation: 11 = 3 + 8 = F4 + F6.

For n = 60, the output should be
fibonacciSimpleSum2(n) = true.

Explanation: 11 = 5 + 55 = F5 + F10.

For n = 66, the output should be
fibonacciSimpleSum2(n) = false.
*/
bool fibonacciSimpleSum2(int n) {
	std::vector<int> fib{ 0, 1 };
	int cnt = 2;

	while (fib[cnt - 1] + fib[cnt - 2] < n) {
		fib.push_back(fib[cnt - 1] + fib[cnt - 2]);
		cnt++;
	}

	for (int i = 0; i < cnt; i++) {
		if (fib[i] + fib[cnt - 1] == n) {
			return true;
		}
	}

	return false;
}
