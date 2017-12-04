/*
Calculate the LCPD (least common prime divisor) of two numbers.

Example

For a = 12 and b = 13, the output should be
leastCommonPrimeDivisor(a, b) = -1;
For a = 12 and b = 18, the output should be
leastCommonPrimeDivisor(a, b) = 2.
*/
int leastCommonPrimeDivisor(int a, int b) {
	vector<bool> prime(max(a, b) + 1, true);
	for (int i = 2; i <= max(a, b); i++)
		if (prime[i])
		{
			if (a%i == 0 && b%i == 0)
				return i;
			for (int p = i * 2; p <= max(a, b); p += i)
				prime[p] = false;
		}
	return -1;
}

