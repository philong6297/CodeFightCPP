#include "Header.h"
/*
Triangular Numbers are positive integers that can be represented as a sum of all integers from 1 up to some n. Determine if the given number is Triangular.

Example

For value = 10, the output should be
isSum(value) = true.

Explanation: 10 = 1 + 2 + 3 + 4.

For value = 11, the output should be
isSum(value) = false.

1 + 2 + 3 + 4 = 10 < value < 15 = 1 + 2 + 3 + 4 + 5.
*/
bool isSum(int value) {
	int ret = 1;
	int i = 1;
	while (ret < value)
		ret += ++i;
	return ret == value;
}
