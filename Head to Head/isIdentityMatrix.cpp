#include "Header.h"
/*
Check if the given matrix is an identity matrix.

Example

For

matrix = [[1, 0, 0],
[0, 1, 0],
[0, 0, 1]]
the output should be
isIdentityMatrix(matrix) = true;

For

matrix = [[1, 0, 0],
[0, 0, 0],
[0, 0, 1]]
the output should be
isIdentityMatrix(matrix) = false.
*/

bool isIdentityMatrix(std::vector<std::vector<int>> matrix) {

	for (int i = 0; i < matrix.size(); i++) {
		for (int j = 0; j < matrix.size(); j++) {
			if (matrix[i][j] != 1 && i == j
				|| matrix[i][j] && i != j) {
				return false;
			}
		}
	}
	return  true;
}
