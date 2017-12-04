#include "Header.h"
/*
Given a string, output its longest prefix which contains only digits.

Example

For inputString="123aa1", the output should be
longestDigitsPrefix(inputString) = "123".
*/
std::string longestDigitsPrefix(std::string inputString) {
	std::string result = "";
	for (int i = 0; i < inputString.size(); i++) {
		if (isdigit(inputString[i])) {
			result += inputString[i];
		}
		else {
			break;
		}
	}
	return result;
}
