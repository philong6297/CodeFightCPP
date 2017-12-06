/*
For a set of points P on a plane, let's denote the set of all distinct distances between the pairs of these points as distinctDistances(P).

Given a sorted list distances, consisting of three pairwise distinct positive integers, find the set of points P of a minimum size such that distances is a subset of distinctDistances(P) (in other words, each element of distances belongs to distinctDistances(P)). Return the size of P as the answer.

Example

For distances = [3, 4, 5], the output should be
distinctDistances(distances) = 3.

For instance, P may consist of (0, 0), (0, 3) and (4, 0).
*/
int distinctDistances(std::vector<int> distances) {
	return 3 + (distances[2] > distances[1] + distances[0]);
}

