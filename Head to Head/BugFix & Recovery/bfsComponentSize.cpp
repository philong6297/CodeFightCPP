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

	std::vector<bool> visited(matrix.size(), 0);
	std::queue<int> Queue;
	int componentSize = 0;

	visited[1] = true;
	Queue.push(1);

	while (Queue.size() > 0) {
		int currentVertex = Queue.front();
		Queue.pop();
		visited[currentVertex] = true;
		componentSize++;
		for (int nextVertex = 0; nextVertex < matrix.size(); nextVertex++) {
			if (matrix[currentVertex][nextVertex] && !visited[nextVertex]) {
				visited[nextVertex] = true;
				Queue.push(nextVertex);
			}
		}
	}

	return componentSize;
}

