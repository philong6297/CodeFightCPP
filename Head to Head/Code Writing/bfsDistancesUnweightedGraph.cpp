/*
Given the adjacency matrix of the connected undirected graph with no loops or multiple edges and the index of the start vertex, find the distances between the start vertex and each vertex of the graph.

Example

For

matrix = [[false, false, true],
[false, false, true],
[true, true, false]]
and startVertex = 0, the output should be
bfsDistancesUnweightedGraph(matrix, startVertex) = [0, 2, 1].
*/

std::vector<int> bfsDistancesUnweightedGraph(std::vector<std::vector<bool>> matrix, int startVertex) {
	map<int, set<int>> neighbor;
	for (int i = 0; i<size(matrix); i++)
		for (int j = i + 1; j<size(matrix[i]); j++)
			if (matrix[i][j])
				neighbor[i].insert(j),
				neighbor[j].insert(i);

	vector<int> dist(size(matrix), 0);
	set<int> visited;
	queue<int> q;
	q.push(startVertex);
	while (!q.empty())
	{
		int parent = q.front();
		q.pop();
		for (auto &child : neighbor[parent])
			if (visited.find(child) == end(visited))
				visited.insert(child),
				dist[child] = dist[parent] + 1,
				q.push(child);
		visited.insert(parent);
	}
	return dist;
}
