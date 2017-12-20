/*
Find the greatest common divisor of two given integers. Each integer is given in the form of its prime factorization - a sorted array of all prime factors of the number.

Example

For a = [2, 3, 3, 3, 5] and b = [2, 2, 2, 2, 3, 3], the output should be
factorizedGCD(a, b) = 18.

gcd(a, b) = gcd(270, 144).
*/
int factorizedGCD(std::vector<int> a, std::vector<int> b) {
	int ret = 1;
	int j = 0;
	for (int i = 0; i<size(a); i++) {
		while (j < size(b) && b[j] < a[i])
			j++;
		if (b[j] == a[i])
			ret *= a[i], j++;
	}
	return ret;
}
