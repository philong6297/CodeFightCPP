/*
For a given integer n, return the shortest possible list of distinct Fibonacci numbers that sum up to n, sorted in ascending order.

Example

For n = 20, the output should be
fibonacciSum(n) = [2, 5, 13].
*/

std::vector<int> fibonacciSum(int n) {

	std::vector<int> fib;
	int fib0 = 1;
	int fib1 = 1;
	fib.push_back(fib1);
	while (fib1 < n) {
		int fib2 = fib0 + fib1;
		fib.push_back(fib2);
		fib0 = fib1;
		fib1 = fib2;
	}

	std::vector<int> ans;
	for (int i = (int)fib.size() - 1; i >= 0; i--) {
		if (n >= fib[i]) {
			n -= fib[i];
			ans.push_back(fib[i]);
		}
	}

	std::reverse(ans.begin(), ans.end());
	return ans;
}
