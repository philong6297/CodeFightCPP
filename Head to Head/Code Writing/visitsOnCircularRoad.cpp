/*
There are n houses in a village on a circular road numbered from 1 to n starting from some house in clockwise order. It takes one minute to get from one house to any of two adjacent houses and there are no other roads in this village besides the circular one. Find the minimal time required to make all visits in the desired order starting from house 1.

Example

For n = 4 and visitsOrder = [1, 3, 2, 3, 1], the output should be
visitsOnCircularRoad(n, visitsOrder) = 6.

Check out the image below for better understanding:
*/

int visitsOnCircularRoad(int n, std::vector<int> visitsOrder) {
	int current = 1,
		res = 0;
	for (auto &it : visitsOrder) {
		res += min(std::abs(it - current), n - std::abs(it - current));
		current = it;
	}
	return res;
}
