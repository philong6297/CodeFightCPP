/*
Given a string, output its longest prefix which contains only digits.

Example

For inputString="123aa1", the output should be
longestDigitsPrefix(inputString) = "123".
*/
std::string longestDigitsPrefix(std::string inputString) {
	auto i = begin(inputString);
	while (isdigit(*i++));
	return string(begin(inputString), i - 1);
}
