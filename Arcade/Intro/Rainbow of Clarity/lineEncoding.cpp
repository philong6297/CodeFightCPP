/*
Given a string, return its encoding defined as follows:

First, the string is divided into the least possible number of disjoint substrings consisting of identical characters
for example, "aabbbc" is divided into ["aa", "bbb", "c"]
Next, each substring with length greater than one is replaced with a concatenation of its length and the repeating character
for example, substring "bbb" is replaced by "3b"
Finally, all the new strings are concatenated together in the same order and a new string is returned.
Example

For s = "aabbbc", the output should be
lineEncoding(s) = "2a3bc".
*/
std::string lineEncoding(std::string s) {
	int count = 1;
	char charToCount = s[0];
	string ret;
	s += '.';
	for (int i = 1; i<size(s); i++) {
		if (s[i] == charToCount)
			count++;
		else
		{
			if (count > 1) ret += to_string(count);
			ret += charToCount;
			charToCount = s[i];
			count = 1;
		}
	}
	return ret;
}