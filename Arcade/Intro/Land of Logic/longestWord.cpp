/*
Define a word as a sequence of consecutive English letters. Find the longest word from the given string.

Example

For text = "Ready, steady, go!", the output should be
longestWord(text) = "steady".
*/
std::string longestWord(std::string text) {
	string ret = "";
	text += ".";
	int index = -1;
	int length = 0;
	for (int i = 0; i<size(text); i++) {
		if (isalpha(text[i])) {
			if (index == -1)
				index = i;
			length++;
		}
		else {
			if (size(ret) < length)
				ret = text.substr(index, length);
			index = -1;
			length = 0;
		}
	}
	return ret;
}
