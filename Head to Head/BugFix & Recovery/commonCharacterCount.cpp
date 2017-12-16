/*
Given two strings, find the number of common characters between them.

Example

For s1 = "aabcc" and s2 = "adcaa", the output should be
commonCharacterCount(s1, s2) = 3.

Strings have 3 common characters - 2 "a"s and 1 "c".
*/
int commonCharacterCount(std::string s1, std::string s2) {
	std::map<char, int> map1;
	std::map<char, int> map2;
	int answer = 0;
	for (int i = 0; i < s1.size(); i++) {
		char ch = s1[i];
		map1[ch] = (map1.count(ch) ? map1[ch] + 1 : 1);
	}
	for (int i = 0; i < s2.size(); i++) {
		char ch = s2[i];
		map2[ch] = (map2.count(ch) ? map2[ch] + 1 : 1);
	}
	for (char ch = 'a'; ch <= 'z'; ch++) {
		if (map1.count(ch) && map2.count(ch)) {
			answer += std::min(map1[ch], map2[ch]);
		}
	}
	return answer;
}
