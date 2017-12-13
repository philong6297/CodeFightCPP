/*
Given a set of points on the plane, find the area of its axis-aligned minimum bounding box.

Example

For x = [1, 0, 4] and y = [-1, 2, 2], the output should be
axisAlignedBoundingBox(x, y) = 12.

In the image below points are given in blue, and the axis-aligned minimum bounding box is given in red. Its area is 3 * 4 = 12.
*/
int axisAlignedBoundingBox(std::vector<int> x, std::vector<int> y) {
	auto pX = minmax_element(begin(x), end(x)),
		pY = minmax_element(begin(y), end(y));
	return (*pX.first - *pX.second)*(*pY.first - *pY.second);
}
