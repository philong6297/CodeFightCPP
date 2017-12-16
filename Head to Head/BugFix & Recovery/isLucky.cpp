/*
Ticket numbers usually consist of an even number of digits. A ticket number is considered lucky if the sum of the first half of the digits is equal to the sum of the second half.

Given a ticket number n, determine if it's lucky or not.

Example

For n = 1230, the output should be
isLucky(n) = true;
For n = 239017, the output should be
isLucky(n) = false.
*/
bool isLucky(int n) {

	std::vector<int> digits;
	int sum = 0;

	while (n > 0) {
		digits.push_back(n % 10);
		n /= 10;
	}

	for (int i = 0; i < digits.size(); i++) {
		if (i < digits.size() / 2) {
			sum += digits[i];
		}
		else {
			sum -= digits[i];
		}
	}

	if (sum) {
		return false;
	}
	return true;
}
