/*
Given a matrix, find its trace.

Example

For

matrix = [[1, 1, 1],
[0, 5, 0],
[2, 1, 3]]
the output should be
matrixTrace(matrix) = 9.
*/
int matrixTrace(std::vector<std::vector<int>> matrix) {

	int result = 0;
	for (int i = 0; i < matrix.size(); i++) {
		result += matrix[i][i];
	}
	return result;
}
