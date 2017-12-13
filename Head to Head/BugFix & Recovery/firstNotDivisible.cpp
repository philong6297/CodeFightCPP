/*
Find the smallest integer not less than the given limit which is not divisible by any of the integers from the given array.

Example

For divisors = [2, 3, 4] and start = 14, the output should be
firstNotDivisible(divisors, start) = 17.
*/
int firstNotDivisible(std::vector<int> divisors, int start) {

	for (int answer = start; ; answer++) {
		bool correct = true;
		for (int i = 0; i < divisors.size(); i++) {
			if (answer % divisors[i] == 0) {
				correct = false;
				break;
			}
		}
		if (correct) {
			return answer;
		}
	}
}
