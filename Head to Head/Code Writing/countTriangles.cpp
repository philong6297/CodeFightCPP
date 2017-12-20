/*
Given a set of points, find the number of triangles with non-zero areas formed by some trio of the given points.

Example

For x = [0, 0, 1, 1] and y = [0, 1, 1, 0], the output should be
countTriangles(x, y) = 4.
*/
int countTriangles(std::vector<int> x, std::vector<int> y) {
	int result = 0;
	for (int i = 0; i < size(x); i++)
		for (int j = i + 1; j < size(x); j++)
			for (int k = j + 1; k < size(x); k++)
				result += ((x[i] - x[j]) * (y[i] - y[k])
					- (x[i] - x[k]) * (y[i] - y[j]) != 0);
	return result;
}
