/*
Sudoku is a number-placement puzzle. The objective is to fill a 9 × 9 grid with digits so that each column, each row, and each of the nine 3 × 3 sub-grids that compose the grid contains all of the digits from 1 to 9.

This algorithm should check if the given grid of numbers represents a correct solution to Sudoku.
*/
bool sudoku(std::vector<std::vector<int>> grid) {
	set<int> countRow, countCol;
	int subGrid[3][3][3][3];
	//check Row
	for (int i = 0; i<9; i++)
	{
		countRow.clear();
		countCol.clear();
		for (int j = 0; j<9; j++)
		{
			countRow.insert(grid[i][j]);
			if (size(countRow) != j + 1) return false;
			countCol.insert(grid[j][i]);
			if (size(countCol) != j + 1) return false;
			subGrid[i / 3][j / 3][i % 3][j % 3] = grid[i][j];
		}
	}
	set<int> countSubGrid;
	for (auto &i : subGrid)
		for (auto &j : i) {
			countSubGrid.clear();
			for (auto &k : j)
				for (auto &l : k)
					countSubGrid.insert(l);
			if (size(countSubGrid) != 9)
				return false;
		}
	return true;
}
