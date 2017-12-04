/*
In the Land Of Chess, bishops don't really like each other. In fact, when two bishops happen to stand on the same diagonal, they immediately rush towards the opposite ends of that same diagonal.

Given the initial positions (in chess notation) of two bishops, bishop1 and bishop2, calculate their future positions. Keep in mind that bishops won't move unless they see each other along the same diagonal.

Example

For bishop1 = "d7" and bishop2 = "f5", the output should be
bishopDiagonal(bishop1, bishop2) = ["c8", "h3"].

For bishop1 = "d8" and bishop2 = "b5", the output should be
bishopDiagonal(bishop1, bishop2) = ["b5", "d8"].

The bishops don't belong to the same diagonal, so they don't move.
*/
std::vector<std::string> bishopDiagonal(std::string bishop1, std::string bishop2) {
	string max = bishop1, min = bishop2;
	if (bishop1 < bishop2)  max = bishop2, min = bishop1;
	bool canMove = true;
	vector<int> dmax(2, 0), dmin(2, 0);
	//min up left max down right
	if ((max[0] - 'a' + 1) + max[1] - '0' == (min[0] - 'a' + 1) + min[1] - '0') {
		dmin = { -1,1 }, dmax = { 1,-1 };
	}
	//max up right min down left
	else if ((max[0] - 'a' + 1) - max[1] + '0' == (min[0] - 'a' + 1) - min[1] + '0') {
		dmin = { -1,-1 }, dmax = { 1,1 };
	}
	else canMove = false;
	cout << "Can move :" << canMove << endl;
	if (canMove) {
		auto validAlpha = [&](char x)->bool {
			return 'a' <= x && x <= 'h';
		};
		auto validDigit = [&](char x)->bool {
			return '1' <= x && x <= '8';
		};
		auto move = [&](string &bishop, vector<int> d) {
			while (validDigit(bishop[1] + d[1]) && validAlpha(bishop[0] + d[0]))
				bishop[1] += d[1], bishop[0] += d[0];
		};
		move(min, dmin);
		move(max, dmax);
	}
	return { min,max };
}
