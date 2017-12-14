/*
Check the existence of a triangle with the given side lengths. A necessary and sufficient condition for triangle existence is that the sum of any two of its sides must be strictly greater than the third side.

Example

For sides = [1, 2, 10], the output should be
triangleExistence(sides) = false;
For sides = [6, 2, 5], the output should be
triangleExistence(sides) = true.
*/
bool triangleExistence(std::vector<int> sides) {
	std::sort(sides.begin(), sides.end());

	if (sides[0] + sides[1] > sides[2]) {
		return  true;
	}
	return false;
}
