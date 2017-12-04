#include "Header.h"
/*
Solve quadratic equation of the form a * x2 + b * x + c = 0 and return sorted array of all its different real roots.

Example

For a = 1, b = -3 and c = 2, the output should be
quadraticEquation(a, b, c) = [1, 2];
For a = 1, b = 2 and c = 1, the output should be
quadraticEquation(a, b, c) = [-1];
For a = 2, b = 2 and c = 1, the output should be
quadraticEquation(a, b, c) = [].
*/
std::vector<double> quadraticEquation(int a, int b, int c) {
	double delta = b * b - 4 * a * c;

	if (delta < 0) return {};
	if (delta == 0) return { (double)-b / (2 * a) };

	std::vector<double> ans = { (double)(-b - sqrt(delta)) / (2 * a), (double)(-b + sqrt(delta)) / (2 * a) };
	std::sort(ans.begin(), ans.end());

	return ans;
}
