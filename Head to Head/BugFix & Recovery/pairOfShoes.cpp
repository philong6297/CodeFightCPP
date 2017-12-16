/*
Yesterday you found some shoes in your room. Each shoe is described by two values:

type indicates if it's a left or a right shoe;
size is the size of the shoe.
Your task is to check whether it is possible to pair the shoes you found in such a way that each pair consists of a right and a left shoe of an equal size.

Example

For

shoes = [[0, 21],
[1, 23],
[1, 21],
[0, 23]]
the output should be

pairOfShoes(shoes) = true;

For

shoes = [[0, 21],
[1, 23],
[1, 21],
[1, 23]]
the output should be

pairOfShoes(shoes) = false.
*/
bool pairOfShoes(std::vector<std::vector<int>> shoes) {
	std::vector<int> leftShoes, rightShoes;
	for (int i = 0; i < shoes.size(); i++) {
		if (shoes[i][0] == 0) {
			leftShoes.push_back(shoes[i][1]);
		}
		else {
			rightShoes.push_back(shoes[i][1]);
		}
	}
	std::sort(leftShoes.begin(), leftShoes.end());
	std::sort(rightShoes.begin(), rightShoes.end());
	if (leftShoes.size() != rightShoes.size()) {
		return false;
	}
	for (int i = 0; i < leftShoes.size(); i++) {
		if (leftShoes[i] != rightShoes[i]) {
			return false;
		}
	}
	return true;
}