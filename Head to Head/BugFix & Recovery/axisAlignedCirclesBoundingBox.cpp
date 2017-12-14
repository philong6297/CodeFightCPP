/*
Given a set of circles find the area of the axis-aligned minimum bounding box of the set of points which belong to at least one of the given circles.

Example

For x = [1, 0, 4], y = [-1, 2, 2] and r = [3, 5, 4], the output should be
axisAlignedCirclesBoundingBox(x, y, r) = 143.

In the image below circles are given in blue, green and yellow, and the axis-aligned minimum bounding box is given in red. Its area is 13 * 11 = 143.
*/
int axisAlignedCirclesBoundingBox(std::vector<int> x,
	std::vector<int> y,
	std::vector<int> r) {

	int minX = x[0] - r[0],
		maxX = x[0] + r[0],
		minY = y[0] - r[0],
		maxY = y[0] + r[0];

	for (int i = 1; i < x.size(); i++) {
		minX = std::min(x[i] - r[i], minX);
		maxX = std::max(x[i] + r[i], maxX);
		minY = std::min(y[i] - r[i], minY);
		maxY = std::max(y[i] + r[i], maxY);
	}

	return (maxX - minX) * (maxY - minY);
}
