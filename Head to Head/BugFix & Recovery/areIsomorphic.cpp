/*
Two two-dimensional arrays are isomorphic if they have the same number of rows and each pair of respective rows contains the same number of elements.

Given two two-dimensional arrays, check if they are isomorphic.

Example

For

array1 = [[1, 1, 1],
[0, 0]]
and

array2 = [[2, 1, 1],
[2, 1]]
the output should be
areIsomorphic(array1, array2) = true;

For

array1 = [[2],
[]]
and

array2 = [[2]]
the output should be
areIsomorphic(array1, array2) = false.
*/

typedef std::vector<std::vector<int>> Array2D;

bool areIsomorphic(Array2D array1, Array2D array2) {

	if (array1.size() != array2.size()) {
		return false;
	}

	for (int i = 0; i < array1.size(); i++) {
		if (array1[i].size() != array2[i].size()) {
			return false;
		}
	}

	return true;
}