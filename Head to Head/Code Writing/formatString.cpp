/*
Remove extra white-spaces from the given string.

Example

For input = " abc   a aa  a a ", the output should be
formatString(input) = "abc a aa a a".
*/
std::string formatString(std::string input) {
	string ret;
	for (int i = 0; i<size(input); i++)
		if (isalpha(input[i]) || isalpha(ret.back()))
			ret += input[i];
	if (ret.back() == ' ') return ret.substr(0, size(ret) - 1);
	return ret;
}
