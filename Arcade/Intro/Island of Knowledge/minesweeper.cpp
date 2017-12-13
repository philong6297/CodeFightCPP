/*
In the popular Minesweeper game you have a board with some mines and those cells that don't contain a mine have a number in it that indicates the total number of mines in the neighboring cells. Starting off with some arrangement of mines we want to create a Minesweeper game setup.

Example

For

matrix = [[true, false, false],
[false, true, false],
[false, false, false]]
the output should be

minesweeper(matrix) = [[1, 2, 1],
[2, 1, 1],
[1, 1, 1]]
*/
std::vector<std::vector<int>> minesweeper(std::vector<std::vector<bool>> matrix) {
	vector<vector<int>> ret(size(matrix), vector<int>(size(matrix[0]), 0));
	for (int i = 0; i < size(matrix); i++)
		for (int j = 0; j<size(matrix[i]); j++)
			for (int y : {i - 1, i, i + 1})
				if (y >= 0 && y < size(matrix))
					for (int x : {j - 1, j, j + 1})
						if (x >= 0 && x < size(matrix[i]) && matrix[y][x] == true && !(x == j && y == i))
							ret[i][j]++;
	return ret;

}
