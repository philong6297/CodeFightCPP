/*
A rectangle with sides parallel to the axes can be written as a pair of opposing vertices' coordinates of this rectangle.

Find the area of the intersection of two rectangles given in the described format.

Example

For a = [0, 0], b = [2, 2], c = [1, 1] and d = [3, 3], the output should be
rectanglesIntersection(a, b, c, d) = 1.
*/
int rectanglesIntersection(std::vector<int> a, std::vector<int> b, std::vector<int> c, std::vector<int> d) {
	int intersection[2];
	for (int i = 0; i < 2; i++) {
		if (a[i] > b[i])
			swap(a[i], b[i]);
		if (c[i] > d[i])
			swap(c[i], d[i]);
		if (b[i] < c[i] || d[i] < a[i]) {
			return 0;
		}
		intersection[i] = min(b[i], d[i]) - max(a[i], c[i]);
	}
	return intersection[0] * intersection[1];
}
