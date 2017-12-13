/*
Construct a square matrix with a size N × N containing integers from 1 to N * N in a spiral order, starting from top-left and in clockwise direction.

Example

For n = 3, the output should be

spiralNumbers(n) = [[1, 2, 3],
[8, 9, 4],
[7, 6, 5]]
*/
std::vector<std::vector<int>> spiralNumbers(int n) {
	int curX = 0, curY = 0;
	int corner[4][2] = { { 1,0 },{ 0,n - 1 },{ n - 1,n - 1 },{ n - 1,0 } };
	// topleft 0 topright 1 botright 2 botleft 3
	int dir[4][2] = { { 0,1 },{ 1,0 },{ 0,-1 },{ -1,0 } };
	// to right 0 down 1 left 2 up 3
	int cornerMove[4][2] = { { 1,1 },{ 1,-1 },{ -1,-1 },{ -1,1 } };
	vector<vector<int>> ret(n, vector<int>(n, 0));
	int d = 0;
	for (int i = 1; i <= n * n; i++) {
		ret[curY][curX] = i;
		curY += dir[d][0];
		curX += dir[d][1];
		for (int i = 0; i<4; i++)
			if (curY == corner[i][0] && curX == corner[i][1])
			{
				d = i;
				corner[i][0] += cornerMove[i][0];
				corner[i][1] += cornerMove[i][1];
				break;
			}
	}
	return ret;
}