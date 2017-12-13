/*
For a given array of integers construct a square matrix A with side length equal to the length of array where A[i, j] is equal to the sum of all elements of the array with indexes between i and j, inclusive.

Note that between i and j means a[i] + a[i + 1] + ... + a[j] for the case i ≤ j, and a[j] + a[j + 1] + ... + a[i] for the case i > j.

Example

For inputArray = [1, 2, 3], the output should be

segmentSumsMatrix1(inputArray) = [[1, 3, 6],
[3, 2, 5],
[6, 5, 3]]
*/
typedef std::vector<std::vector<int>> matrix;

matrix segmentSumsMatrix1(std::vector<int> inputArray) {

	std::vector<int> line(inputArray.size(), 0);
	matrix answer(inputArray.size(), line);

	for (int i = 0; i < inputArray.size(); i++) {
		for (int j = i; j >= 0; j--) {
			for (int k = i; k < inputArray.size(); k++) {
				answer[j][k] += inputArray[i];
				answer[k][j] += inputArray[i];
			}
		}
		answer[i][i] -= inputArray[i];
	}

	return answer;
}
