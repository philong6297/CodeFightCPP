/*
Check if the given matrix is diagonal.

Example

For

matrix = [[1, 0, 0],
[0, 5, 0],
[0, 0, 3]]
the output should be
isDiagonalMatrix(matrix) = true;

For

matrix = [[1, 0, 0],
[0, 5, 0],
[2, 0, 3]]
the output should be
isDiagonalMatrix(matrix) = false.
*/
bool isDiagonalMatrix(std::vector<std::vector<int>> matrix) {

for (int i = 0; i < matrix.size(); i++) {
	for (int j = 0; j < matrix.size(); j++) {
		if (matrix[i][j] && i != j) {
			return false;
		}
	}
}
return true;
}

