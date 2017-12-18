/*
A masked number is a string that consists of digits and one asterisk (*) that should be replaced by exactly one digit. Given a masked number find all the possible options to replace the asterisk with a digit to produce an integer divisible by 6.

Example

For inputString = "1*0", the output should be
isDivisibleBy6(inputString) = ["120", "150", "180"].
*/
std::vector<std::string> isDivisibleBy6(std::string inputString) {

	int digitSum = 0,
		leftBound = '0',
		rightBound = '9',
		asteriskPos = -1;
	std::vector<std::string> answer;

	for (int i = 0; i < inputString.size(); i++) {
		if (leftBound <= char(inputString[i]) &&
			char(inputString[i]) <= rightBound) {
			digitSum += char(inputString[i]) - leftBound;
		}
		else {
			asteriskPos = i;
		}
	}

	for (int i = 0; i < 10; i++) {
		if ((digitSum + i) % 3 == 0) {
			inputString[asteriskPos] = char(leftBound + i);
			if ((inputString[(int)inputString.size() - 1] - leftBound) % 2 == 0) {
				answer.push_back(inputString);
			}
		}
	}

	return answer;
}
