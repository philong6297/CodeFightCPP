/*
Transform a given sentence into a new one with dashes between each two consecutive letters.

Example

For inputString = "aba caba", the output should be
insertDashes(inputString) = "a-b-a c-a-b-a".
*/
std::string insertDashes(std::string inputString) {
	std::string buf;
	std::stringstream ss(inputString);
	std::vector<std::string> words;
	while (ss >> buf) {
		words.push_back(buf);
	}
	for (int i = 0; i < words.size(); i++) {
		std::string new_word = "";
		for (int j = 0; j < words[i].size() - 1; j++) {
			new_word += std::string(1, words[i][j]) + "-";
		}
		words[i] = new_word + words[i][words[i].size() - 1];
	}
	std::string ans = "";
	for (int i = 0; i < words.size() - 1; i++) {
		ans += words[i] + " ";
	}
	return ans + words[words.size() - 1];
}