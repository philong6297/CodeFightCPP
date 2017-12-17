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
	for (int i = 0; i < size(matrix); i++) {
		for (int j = i + 1; j < size(matrix[0]); j++) {
			if (matrix[i][j]) {
				return 0;
			}
		}
	}
	return 1;
}
