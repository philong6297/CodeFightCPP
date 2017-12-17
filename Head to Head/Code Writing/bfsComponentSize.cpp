/*
Given the adjacency matrix of an undirected graph with no loops or multiple edges, find the size of the connected component of vertex 1 (0-based).

Example

For

matrix = [[false, true, false],
[true, false, false],
[false, false, false]]
the output should be
bfsComponentSize(matrix) = 2.

The component contains vertices 0 and 1.



For

matrix = [[false, false, true, false],
[false, false, false, false],
[true, false, false, true],
[false, false, true, false]]
the output should be
bfsComponentSize(matrix) = 1.

The component consists of a single vertex 1.
*/
int bfsComponentSize(std::vector<std::vector<bool>> matrix) {
	std::vector<bool> visited(size(matrix), 0);
	std::queue<int> q;
	int ret = 0;

	visited[1] = 1;
	q.push(1);

	while (size(q) > 0) {
		int v = q.front();
		q.pop();
		visited[v] = 1;
		ret++;
		for (int c = 0; c < matrix.size(); c++) {
			if (matrix[v][c] && !visited[c]) {
				visited[c] = 1;
				q.push(c);
			}
		}
	}

	return ret;
}
