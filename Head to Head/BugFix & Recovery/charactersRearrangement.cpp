/*
Given two strings, check whether it is possible to rearrange characters of the first string in such way that it will become equal to the second one.

Example

For string1 = "abcd" and string2 = "cbad", the output should be
charactersRearrangement(string1, string2) = true;
For string1 = "a" and string2 = "b", the output should be
charactersRearrangement(string1, string2) = false.
*/
bool charactersRearrangement(std::string string1, std::string string2) {
	bool correct = true;

	std::sort(string1.begin(), string1.end());
	std::sort(string2.begin(), string2.end());

	for (int i = 0; i < std::max(string1.length(), string2.length()); ++i) {
		if (i >= string1.length() || i >= string2.length()
			|| string1[i] != string2[i]) {
			correct = false;
			break;
		}
	}

	return correct;
}
