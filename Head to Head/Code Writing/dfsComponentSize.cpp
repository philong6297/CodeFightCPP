/*
Given an undirected graph and some vertex index, find the size of the connected component of that vertex.

Example

For

matrix = [[false, true, false],
[true, false, false],
[false, false, false]]
and vertex = 0, the output should be
dfsComponentSize(matrix, vertex) = 2.
*/

int dfsComponentSize(std::vector<std::vector<bool>> matrix, int vertex) {
	vector<bool> visited(size(matrix), 0);
	stack<int> stack;
	stack.push(vertex);
	int ret = 0;
	while (!stack.empty())
	{
		int current = stack.top();
		stack.pop();
		if (visited[current] == 0)
		{
			visited[current] = 1;
			ret++;
			for (int child = 0; child<size(matrix[current]); child++)
				if (matrix[current][child] == true)
					stack.push(child);
		}
	}
	return ret;
}
