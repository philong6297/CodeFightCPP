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
	int va = stoi(a), vb = stoi(b);
	return va < vb ? "less" : a == b ? "equal" : "greater";
}
