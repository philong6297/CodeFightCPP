/*
Given a decimal integer n, find an integer k ≥ 2 such that the representation of n in base k has the maximum possible number of zeros. If there are several answers, output the smallest one.

Example

For n = 9, the output should be
maxZeros(n) = 2.
9 = 10012 = 1003 = 214...
If you'll try all other bases, you'll see that the maximum possible number of zeros in these representations is 2, thus the answer is k = 2.
*/
int maxZeros(int n) {
	int maxBase = 1;
	int maxCount = 0;
	int indexCount;
	auto countZerosInBase = [](int value, int base)->int {
		int count = 0;
		while (value)
			count += (value%base == 0), 
			value /= base;
		return count;
	};
	for (int base = 2; base <= 16; base++)
		if (indexCount = countZerosInBase(n, base); indexCount > maxCount)
			maxCount = indexCount,
			maxBase = base;
	return maxBase;
}
