/*
You are given a tree with vertices numbered from 0 to N - 1. The tree is input as an array parent where parent[i] is the parent of the ith node of the tree. The root of the tree is the vertex number 0 and it is its own parent.

You are to paint some of the tree vertices in such a way that the painted vertices along with the edges between them form a full binary tree. What is the maximum possible size of such tree?

Note that the edges' orientations after painting remain the same, so the highest painted vertex will be a new root.

Example

For parent = [0, 0, 1, 4, 1], the output should be
largestFullBinaryTree(parent) = 3.
*/
int largestFullBinaryTree(std::vector<int> parent) {

	struct Graph {
		std::vector<std::vector<int>> edges;
		int maxBinTree;

		Graph(std::vector<int> const & parent) {
			maxBinTree = 1;
			edges = std::vector<std::vector<int>>(parent.size());
			for (int i = 1; i < parent.size(); i++) {
				edges[parent[i]].push_back(i);
			}
		}

		int dfs(int v) {
			int firstMax = -1;
			int secondMax = -1;
			for (int u : edges[v]) {
				int curMax = dfs(u);
				if (curMax > firstMax) {
					secondMax = firstMax;
					firstMax = curMax;
				}
				else if (curMax > secondMax) {
					secondMax = curMax;
				}
			}
			if (secondMax == -1) {
				return 1;
			}
			int result = 1 + firstMax + secondMax;
			if (result > maxBinTree) {
				maxBinTree = result;
			}
			return result;
		}
	};

	Graph g(parent);
	g.dfs(0);
	return g.maxBinTree;
}