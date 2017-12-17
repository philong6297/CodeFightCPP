/*
Given a rectangular matrix and an integer column, return an array containing the elements of the columnth column of the given matrix (the leftmost column is the 0th one).

Example

For

matrix = [[1, 1, 1, 2],
[0, 5, 0, 4],
[2, 1, 3, 6]]
and column = 2, the output should be
extractMatrixColumn(matrix, column) = [1, 0, 3].
*/
std::vector<int> extractMatrixColumn(std::vector<std::vector<int>> matrix, int column) {
	vector<int> ret;
	for (int i = 0; i<size(matrix); i++)
		ret.push_back(matrix[i][column]);
	return ret;
}
