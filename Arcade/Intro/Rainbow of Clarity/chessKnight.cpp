/*
Given a position of a knight on the standard chessboard, find the number of different moves the knight can perform.

The knight can move to a square that is two squares horizontally and one square vertically, or two squares vertically and one square horizontally away from it. The complete move therefore looks like the letter L. Check out the image below to see all valid moves for a knight piece that is placed on one of the central squares.



Example

For cell = "a1", the output should be
chessKnight(cell) = 2.



For cell = "c2", the output should be
chessKnight(cell) = 6.
*/
int chessKnight(std::string cell) {
	int dx[8] = { -2,-2,-1,-1, 1, 1, 2, 2 },
		dy[8] = { -1, 1,-2, 2, 2,-2,-1, 1 };
	auto isValid = [](char x, char y)->bool {
		return x>96 && x < 105 && y > 48 && y< 57;
	};
	int count = 0;
	for (int i = 0; i<8; i++) {
		if (isValid(cell[0] + dx[i], cell[1] + dy[i]))
			count++;
	}
	return count;
}

