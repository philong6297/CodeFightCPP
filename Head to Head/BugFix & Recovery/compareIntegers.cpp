/*
Compare two integers given as strings.

Example

For a = "12" and b = "13", the output should be
compareIntegers(a, b) = "less";
For a = "875" and b = "799", the output should be
compareIntegers(a, b) = "greater";
For a = "1000" and b = "1000", the output should be
compareIntegers(a, b) = "equal".
*/
std::string compareIntegers(std::string a, std::string b) {

	if (a.size() > b.size()) {
		return "greater";
	}
	if (a.size() < b.size()) {
		return "less";
	}
	if (a < b) {
		return "less";
	}
	if (a > b) {
		return  "greater";
	}
	return "equal";
}
