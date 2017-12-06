/*
Given a rectangular matrix of integers and integers n and m, we are looking for the submatrix of size n � m that has the maximal sum among all submatrices of the given size.

Example

For

matrix = [[1, 12, 11, 10],
[4,  3,  2,  9],
[5,  6,  7,  8]]
n = 2 and
m = 1, the output should be
maxSubmatrixSum(matrix, n, m) = 19.
*/

int maxSubmatrixSum(std::vector<std::vector<int>> matrix,
	int n, int m) {

	int result = 0;
	for (int i = 0; i + n <= matrix.size(); i++) {
		for (int j = 0; j + m <= matrix[0].size(); j++) {
			int sum = 0;
			for (int x = 0; x < n; x++) {
				for (int y = 0; y < m; y++) {
					sum += matrix[i + x][j + y];
				}
			}
			if (i == 0 && j == 0 || sum > result) {
				result = sum;
			}
		}
	}

	return result;
}