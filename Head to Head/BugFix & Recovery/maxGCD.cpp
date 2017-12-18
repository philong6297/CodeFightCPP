/*
For a given set of positive integers remove one of them to maximize the greatest common divisor (GCD) of the remaining integers. Return the maximized GCD.

Example

For sequence = [8, 60, 12, 3], the output should be
maxGCD(sequence) = 4.

The best option is to remove the element 3, so that gcd([8, 60, 12]) = 4.
*/
int maxGCD(std::vector<int> sequence) {
	struct Helper {
		int gcd(int a, int b) {
			return std::gcd(a, b);
		}
	};

	Helper h;
	int bestRes = 0;

	for (int i = 0; i < sequence.size(); i++) {
		int result = sequence[0];
		if (i == 0) {
			result = sequence[1];
		}
		for (int j = 0; j < sequence.size(); j++) {
			if (i == j) {
				continue;
			}
			result = h.gcd(result, sequence[j]);
		}
		if (result > bestRes) {
			bestRes = result;
		}
	}

	return bestRes;
}
