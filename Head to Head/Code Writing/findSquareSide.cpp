/*
Given a square's vertices in arbitrary order, find (the length of the square's side)2.

Example

For x = [0, 1, 0, 1] and y = [0, 1, 1, 0], the output should be
findSquareSide(x, y) = 1.
*/
int findSquareSide(std::vector<int> x, std::vector<int> y) {
	auto distance = [x, y](int i, int j)->int {
		return pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2);
	};
	return min(distance(0, 1), distance(0, 2));
}
