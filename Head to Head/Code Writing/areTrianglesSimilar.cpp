/*
You have two triangles A1B1C1 and A2B2C2 on a plane. Your task is to determine whether they are rather similar, i.e. if their corresponding angles have the same measurements.

In order for two triangles to be rather similar, the following equations must be true:

angle(A1B1, B1C1) = angle(A2B2, B2C2)
angle(A1C1, C1B1) = angle(A2C2, C2B2)
angle(B1A1, A1C1) = angle(B2A2, A2C2)
where angle(AB, CD) refers to an angle between segments AB and CD in the triangle.
*/

bool areTrianglesSimilar(std::vector<int> coordinates) {
	auto d = [&](int x1, int y1, int x2, int y2)->double {
		return (coordinates[x1] - coordinates[x2])*(coordinates[x1] - coordinates[x2]) + (coordinates[y1] - coordinates[y2])*(coordinates[y1] - coordinates[y2]);
	};
	return d(0, 1, 2, 3) / d(6, 7, 8, 9) == d(2, 3, 4, 5) / d(8, 9, 10, 11) &&
		d(2, 3, 4, 5) / d(8, 9, 10, 11) == d(0, 1, 4, 5) / d(6, 7, 10, 11);
}