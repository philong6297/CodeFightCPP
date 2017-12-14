/*
A pattern can be represented as a string containing lowercase English letters and special characters: question marks and asterisks. Each question mark should be replaced by exactly one letter, and each asterisk should be replaced by zero or more letters (possibly different).

A string of letters matches a pattern if question marks and asterisks in the latter can be replaced by letters in such a way that pattern will become equal to a given string.

Does a given string match a given pattern?

Example

For input = "abacaba" and pattern = "?*b?", the output should be
patternMatching(input, pattern) = true;
For input = "abacaba" and pattern = "?*ca?", the output should be
patternMatching(input, pattern) = false.
*/
typedef std::vector<std::vector<bool>> matrix;

bool patternMatching(std::string input, std::string pattern) {

	std::vector<bool> line(pattern.size() + 1, false);
	matrix dp(input.size() + 1, line);

	dp[0][0] = true;
	for (int i = 0; i <= input.size(); i++) {
		for (int j = 0; j < pattern.size(); j++) {
			if (!dp[i][j]) continue;
			if (i < input.size()
				&& (input[i] == pattern[j] || pattern[j] == '?')) {
				dp[i + 1][j + 1] = true;
			}
			if (pattern[j] == '*') {
				for (int k = 0; i + k <= input.size(); k++) {
					dp[i + k][j + 1] = true;
				}
			}
		}
	}

	return dp[input.size()][pattern.size()];
}
