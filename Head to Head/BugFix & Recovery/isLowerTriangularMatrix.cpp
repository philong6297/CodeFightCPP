/*
Check if the given matrix is lower triangular.

Example

For

matrix = [[1, 0, 0],
[4, 0, 0],
[0, 3, 3]]
the output should be
isLowerTriangularMatrix(matrix) = true;

For

matrix = [[1, 0, 1],
[0, 5, 0],
[2, 0, 3]]
the output should be
isLowerTriangularMatrix(matrix) = false.
*/
bool isLowerTriangularMatrix(std::vector<std::vector<int>> matrix) {

	for (int i = 0; i < matrix.size(); i++) {
		for (int j = i + 1; j < matrix.size(); j++) {
			if (matrix[i][j]) {
				return false;
			}
		}
	}
	return true;
}

