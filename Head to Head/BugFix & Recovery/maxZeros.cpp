/*
Given a decimal integer n, find an integer k ≥ 2 such that the representation of n in base k has the maximum possible number of zeros. If there are several answers, output the smallest one.

Example

For n = 9, the output should be
maxZeros(n) = 2.
9 = 10012 = 1003 = 214...
If you'll try all other bases, you'll see that the maximum possible number of zeros in these representations is 2, thus the answer is k = 2.
*/
int maxZeros(int n) {
	int answer = 0,
		maxZeros = 0;
	for (int k = 2; k < 16; k++) {
		int numZeros = 0,
			value = n;
		while (value) {
			if (value % k == 0) {
				numZeros++;
			}
			value /= k;
		}
		if (numZeros > maxZeros) {
			maxZeros = numZeros;
			answer = k;
		}
	}
	return answer;
}
