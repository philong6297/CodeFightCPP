/*
Given a string, replace each its character by the next one in the English alphabet (z would be replaced by a).

Example

For inputString = "crazy", the output should be
alphabeticShift(inputString) = "dsbaz".
*/

std::string alphabeticShift(std::string inputString) {
	for (auto &it : inputString)
		it = 97 + (it - 97 + 1) % 26;
	return inputString;
}
