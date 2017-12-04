#include "Header.h"
/*
A square matrix that is the negative of its transpose is a skew-symmetric matrix. Find out if the given matrix is skew-symmetric.

Example

For

matrix = [[ 0, 0,  1],
[ 0, 0, -2],
[-1, 2,  0]]
the output should be
isSkewSymmetricMatrix(matrix) = true;

For

matrix = [[ 0,  0,  1],
[ 0,  0, -2],
[-1, -2,  0]]
the output should be
isSkewSymmetricMatrix(matrix) = false.
*/
bool isSkewSymmetricMatrix(std::vector<std::vector<int>> matrix) {
	for (int i = 0; i<size(matrix); i++)
		for (int j = i; j<size(matrix[i]); j++)
			if (matrix[i][j] + matrix[j][i])
				return false;
	return true;
}
