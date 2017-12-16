/*
Convert an integer from some numeral system to the decimal numeral system.

Example

For k = 2 and n = "1101", the output should be
toDecimal(k, n) = 13.
*/
int toDecimal(int k, std::string n) {

	int result = 0;
	int power = 1;
	for (int i = (int)n.size() - 1; i >= 0; i--) {
		result += int(n[i] - '0') * power;
		power *= k;
	}

	return result;
}
