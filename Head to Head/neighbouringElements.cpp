#include "Header.h"
/*
Find the number of unique pairs of neighboring elements with equal values in the given matrix.

Example

For

a = [[1, 1, 1],
[1, 1, 1],
[1, 1, 1]]
the output should be neighbouringElements(a) = 12.
Two elements of a matrix are considered neighboring if their indices are equal on one axis and differ by one on the other axis.
*/
int neighbouringElements(std::vector<std::vector<int>> a) {
	int ret = 0;
	for (int i = 0; i<size(a); i++)
		for (int j = 0; j<size(a[i]); j++)
			ret += (i < size(a) - 1 && a[i][j] == a[i + 1][j]) +
			(j<size(a[i]) - 1 && a[i][j] == a[i][j + 1]);
	return ret;
}
