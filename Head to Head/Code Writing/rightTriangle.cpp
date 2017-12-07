/*
For a given triangle determine if it is a right triangle.

Example

For sides = [3, 5, 4], the output should be
rightTriangle(sides) = true.
*/
bool rightTriangle(std::vector<int> sides) {
	sort(begin(sides), end(sides));
	return sides[2] * sides[2] == sides[0] * sides[0] + sides[1] * sides[1];
}
