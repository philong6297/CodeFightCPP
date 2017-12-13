/*
Given a matrix, find its transpose.

Example

For

matrix = [[1, 1, 3],
[2, 1, 1]]
the output should be

matrixTransposition(matrix) = [[1, 2],
[1, 1],
[3, 1]]
*/
std::vector<std::vector<int>> matrixTransposition(std::vector<std::vector<int>> matrix) {

	std::vector<std::vector<int>> result;
	for (int i = 0; i < matrix[0].size(); i++) {
		std::vector<int> empty;
		result.push_back(empty);
		for (int j = 0; j < matrix.size(); j++) {
			result[i].push_back(matrix[j][i]);
		}
	}
	return result;
}
