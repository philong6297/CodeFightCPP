/*
Given a rectangular matrix containing only digits, calculate the number of different 2 × 2 squares in it.

Example

For

matrix = [[1, 2, 1],
[2, 2, 2],
[2, 2, 2],
[1, 2, 3],
[2, 2, 1]]
the output should be
differentSquares(matrix) = 6.

Here are all 6 different 2 × 2 squares:

1 2
2 2
2 1
2 2
2 2
2 2
2 2
1 2
2 2
2 3
2 3
2 1
*/
int differentSquares(std::vector<std::vector<int>> matrix) {
	set<vector<int>> diff;
	for (int i = 0; i<size(matrix) - 1; i++)
		for (int j = 0; j<size(matrix[i]) - 1; j++)
			diff.insert({ matrix[i][j],matrix[i][j + 1],matrix[i + 1][j + 1],matrix[i + 1][j] });
	return size(diff);
}
