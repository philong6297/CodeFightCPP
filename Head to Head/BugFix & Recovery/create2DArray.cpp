/*
Given array of integers lengths, create an array of arrays output such that output[i] consists of lengths[i] elements and output[i][j] = j.

Example

For lengths = [1, 2, 0, 4], the output should be

create2DArray(lengths) = [[0],
[0, 1],
[],
[0, 1, 2, 3]]
*/
std::vector<std::vector<int>> create2DArray(std::vector<int> lengths) {

	std::vector<std::vector<int>> result;

	for (int i = 0; i < lengths.size(); i++) {
		std::vector<int> line;
		for (int j = 0; j < lengths[i]; j++) {
			line.push_back(j);
		}
		result.push_back(line);
	}

	return result;
}
