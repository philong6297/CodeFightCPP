/*
Given two strings, calculate the Hamming distance between them.

Example

For string1 = "abab" and string2 = "cbad", the output should be
hammingDistance(string1, string2) = 2.

Only the first and the last characters are different.
*/

int hammingDistance(std::string string1, std::string string2) {
	int ret = 0;
	for (int i = 0; i<size(string1); i++)
		if (string1[i] != string2[i])
			ret++;
	return ret;
}
