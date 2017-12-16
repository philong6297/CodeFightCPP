/*
Find the leftmost digit that occurs in a given string.

Example

For inputString = "var_1__Int", the output should be
firstDigit(inputString) = '1';
For inputString = "q2q-q", the output should be
firstDigit(inputString) = '2';
For inputString = "0ss", the output should be
firstDigit(inputString) = '0'.
*/
char firstDigit(std::string inputString) {
	std::regex regex("[0-9]");
	std::smatch match;
	if (regex_search(inputString, match, regex)) {
		std::ssub_match sub_match = match[0];
		return sub_match.str()[0];
	}
}