/*
Given a string, check whether it has length 3.

Example

For inputString = "abs cd", the output should be
checkData(inputString) = false;
For inputString = "s  ", the output should be
checkData(inputString) = true.
*/
bool checkData(std::string inputString) {
	if (inputString.size() == 3) {
		return true;
	}
	else {
		return false;
	}
}
