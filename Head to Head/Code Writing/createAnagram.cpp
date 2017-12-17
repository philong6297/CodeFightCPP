/*
You are given two strings s and t of the same length, consisting of uppercase English letters. Your task is to find the minimum number of "replacement operations" needed to get some anagram of the string t from the string s. A replacement operation is performed by picking exactly one character from the string s and replacing it by some other character.

Example

For s = "AABAA" and t = "BBAAA", the output should be
createAnagram(s, t) = 1;
For s = "OVGHK" and t = "RPGUC", the output should be
createAnagram(s, t) = 4.
*/
int createAnagram(std::string s, std::string t) {
	vector<int> charS(26, 0), charT = charS;
	for (int i = 0; i<size(s); i++)
		charS[s[i] - 65]++,
		charT[t[i] - 65]++;
	int ret = 0;
	for (int i = 0; i<26; i++)
		ret += abs(charS[i] - charT[i]);
	return ret / 2;
}
