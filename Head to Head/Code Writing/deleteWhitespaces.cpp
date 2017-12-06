/*
Given a string, delete whitespaces from it.

Example

For inputStr = "a b cd e", the output should be
deleteWhitespaces(inputStr) = "abcde".
*/

std::string deleteWhitespaces(std::string inputStr) {
	string ret;
	for (auto &it : inputStr)
		if (it != ' ')
			ret += it;
	return ret;
}