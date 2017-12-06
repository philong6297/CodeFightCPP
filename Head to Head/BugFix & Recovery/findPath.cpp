/*
You are given an n � m matrix, which contains all the integers from 1 to n * m, inclusive, each exactly once.

Initially you are standing in the cell containing the number 1. On each turn you are allowed to move to an adjacent cell, i.e. to a cell that shares a common side with the one you are standing on now. It is prohibited to visit any cell more than once.

Check if it is possible to visit all the cells of the matrix in the order of increasing numbers in the cells, i.e. get to the cell with the number 2 on the first turn, then move to 3, etc.

Example

For

matrix = [[1, 4, 5],
[2, 3, 6]]
the output should be
findPath(matrix) = true;

For

matrix = [[1, 3, 6],
[2, 4, 5]]
the output should be
findPath(matrix) = false
*/

bool findPath(std::vector<std::vector<int>> matrix) {

	int positionX = -1;
	int positionY = -1;

	for (int i = 0; i < matrix.size(); i++) {
		for (int j = 0; j < matrix[0].size(); j++) {
			if (matrix[i][j] == 1) {
				positionX = i;
				positionY = j;
			}
		}
	}
	for (int i = 1; i < matrix.size() * matrix[0].size(); i++) {
		bool found = false;
		int nextX = -1;
		int nextY = -1;
		for (int dx = -1; dx <= 1; dx++) {
			for (int dy = -1; dy <= 1; dy++) {
				if (dx * dy == 0) {
					if (positionX + dx >= 0 && positionX + dx < matrix.size()
						&& positionY + dy >= 0 && positionY + dy < matrix[0].size()) {
						if (matrix[positionX + dx][positionY + dy] == i + 1) {
							found = true;
							nextX = positionX + dx;
							nextY = positionY + dy;
						}
					}
				}
			}
		}
		if (found) {
			positionX = nextX;
			positionY = nextY;
		}
		else {
			return false;
		}
	}
	return true;
}
