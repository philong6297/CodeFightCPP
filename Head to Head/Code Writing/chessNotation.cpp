/*
John has always had trouble remembering chess game positions. To help himself with remembering, he decided to store game positions in strings. He came up with the following position notation:

The notation is built for the current game position row by row from top to bottom, with '/' separating each row notation;
Within each row, the contents of each square are described from the leftmost column to the rightmost;
Each piece is identified by a single letter taken from the standard English names ('P' = pawn, 'N' = knight, 'B' = bishop, 'R' = rook, 'Q' = queen, 'K' = king);
White pieces are designated using upper-case letters ("PNBRQK") while black pieces use lowercase ("pnbrqk");
Empty squares are noted using digits 1 through 8 (the number of empty squares from the last piece);
Empty lines are noted as "8".
For example, for the initial position (shown in the picture below) the notation will look like this:

"rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR"



After the white pawn moves from e2 to e4, the notation will be as follows:

"rnbqkbnr/pppppppp/8/8/4P3/8/PPPP1PPP/RNBQKBNR"

John has written down some positions using his notation, and now he wants to rotate the board 90 degrees clockwise and see what notation for the new board would look like. Help him with this task.

Example

For notation = "rnbqkbnr/pppppppp/8/8/4P3/8/PPPP1PPP/RNBQKBNR", the output should be
chessNotation(notation) = "RP4pr/NP4pn/BP4pb/QP4pq/K2P2pk/BP4pb/NP4pn/RP4pr".

The notation corresponds to the initial position with one move made (white pawn from e2 to e4).
After rotating the board, it will look like this:



So, the notation of the new position is "RP4pr/NP4pn/BP4pb/QP4pq/K2P2pk/BP4pb/NP4pn/RP4pr"
*/
std::string chessNotation(std::string notation) {
	regex getRow("\\b([^\/]+?)\\b");
	string temp;
	vector<string> ret;
	for (auto i = sregex_iterator(begin(notation), end(notation), getRow); i != sregex_iterator(); i++)
	{
		temp = "";
		for (auto &it : (*i).str(1))
			if (isdigit(it))
				temp += string(it - 48, '0');
			else temp += it;
			ret.push_back(temp);
	}
	vector<string> rorateRight = ret;
	for (int j = 0; j < 8; j++)
		for (int i = 7; i > -1; i--)
			rorateRight[j][7 - i] = ret[i][j];
	notation = "";
	int countZero;
	for (auto &it : rorateRight)
	{
		temp = "";
		for (int i = 0; i < size(it);) {
			if (isdigit(it[i]))
			{
				countZero = 1;
				while (++i < size(it) && (isdigit(it[i])))
					countZero++;
				temp += to_string(countZero);
			}
			else temp += it[i++];
		}
		notation += temp + "/";
	}
	return notation.substr(0, size(notation) - 1);
}
