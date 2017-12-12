/*
Implement an algorithm that can output the substring of the given string within specified bounds.

Example

For inputString = "abcde", l = 2 and r = 3, the output should be
mySubstring(inputString, l, r) = "cd".
*/
std::string mySubstring(std::string inputString, int l, int r) {
	return inputString.substr(l, r - l + 1);
}
