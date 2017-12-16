/*
Count the number of different edges in a given undirected graph with no loops and multiple edges.

Example

For

matrix = [[false, true, true],
[true, false, false],
[true, false, false]]
the output should be graphEdges(matrix) = 2.
*/
int graphEdges(std::vector<std::vector<bool>> matrix) {
	int count = 0;
	for (int i = 0; i<size(matrix); i++)
		for (int j = i + 1; j<size(matrix[i]); j++)
			if (matrix[i][j])
				count++;
	return count;
}
