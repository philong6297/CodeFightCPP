/*
Several friends live along a straight street. They are friends, thus they enjoy visiting each other. However, they are lazy so none of them wants to visit a friend living more than maxDist meters away from them.

Given array houses representing coordinates of points where the friends live (in meters) and an integer maxDist, return an array representing the number of friends each person would be willing to visit.

Example

For houses = [1, 2, 4, 8, 10] and maxDist = 5, the output should be
lazyFriends(houses, maxDist) = [2, 2, 3, 2, 1].
*/
std::vector<int> lazyFriends(std::vector<int> houses, int maxDist) {
	vector<int> ret(size(houses), 0);
	for (int i = 0; i<size(houses); i++)
		for (int j = i + 1; j<size(houses); j++)
			if (houses[i] + maxDist >= houses[j])
				ret[i]++, ret[j]++;
	return ret;
}
