/*
You are given a set of points on the Cartesian plane. Consider the distance between two points as the maximum difference of their coordinates. For example, the distance between points (1, 2) and (4, 6) is equal to max(|4 - 1|, |6 - 2|) = 4.

Given a set of points, find the pair with the largest distance and return the value of their distance.

Example

For a = [7, 6, 6, 8, 1, 2, 8, 6], the output should be
largestDistance(a) = 7.
*/
int largestDistance(std::vector<int> a) {
	auto distance = [&](pair<int, int> a, pair<int, int> b)->int {
		return max(abs(a.first - b.first), abs(a.second - b.second));
	};
	vector<pair<int, int>> set;
	for (int i = 0; i<size(a); i += 2)
		set.push_back({ a[i],a[i + 1] });
	int ret = -1;
	for (int i = 0; i<size(set); i++)
		for (int j = i + 1; j<size(set); j++)
			ret = max(ret, distance(set[i], set[j]));
	return ret;
}
