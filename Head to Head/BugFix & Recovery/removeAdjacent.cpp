/*
Given a string, remove adjacent duplicate characters.

Example

For s = "aaaaa", the output should be
removeAdjacent(s) = "a";
For s = "abccaaab", the output should be
removeAdjacent(s) = "abcab".
*/

std::string removeAdjacent(std::string s) {

	if (s == "") {
		return  s;
	}

	std::string ans;
	ans += s[0];
	for (int i = 1; i < s.size(); i++) {
		if (s[i] != s[i - 1]) {
			ans += s[i];
		}
	}

	return ans;
}
