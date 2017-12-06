/*
Given a string, find the number of different non-empty substrings in it.

Example

For inputString = "abac", the output should be
differentSubstringsTrie(inputString) = 9.
They are:

"a", "b", "c",
"ab", ac", "ba",
"aba", "bac",
"abac"
*/

int differentSubstringsTrie(std::string inputString) {

	typedef std::vector<std::vector<int>> Array2D;

	struct Helper {
		Array2D addNode(Array2D lastVersion) {
			std::vector<int> line(26, 0);
			lastVersion.push_back(line);
			return lastVersion;
		}
	};

	Helper h;

	int nodesCount = 1;
	Array2D trie;
	trie = h.addNode(trie);

	for (int i = 0; i < inputString.size(); i++) {
		int currentNode = 0;
		for (int j = i; j < inputString.size(); j++) {
			int symbol = inputString[j] - 'a';
			if (!trie[currentNode][symbol]) {
				trie = h.addNode(trie);
				trie[currentNode][symbol] = nodesCount;
				nodesCount++;
			}
			currentNode = trie[currentNode][symbol];
		}
	}

	return nodesCount - 1;
}
