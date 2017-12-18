/*
A masked number is a string that consists of digits and one asterisk (*) that should be replaced by exactly one digit. Given a masked number find all the possible options to replace the asterisk with a digit to produce an integer divisible by 3.

Example

For inputString = "1*0", the output should be
isDivisibleBy3(inputString) = ["120", "150", "180"].
*/
std::vector<std::string> isDivisibleBy3(std::string inputString) {

	int digitSum = 0;
	int leftBound = int('0');
	int rightBound = int('9');
	std::vector<std::string> answer;
	int asteriskPos = -1;

	for (int i = 0; i < inputString.size(); i++) {
		if (leftBound <= inputString[i] &&
			inputString[i] <= rightBound) {
			digitSum += inputString[i] - leftBound;
		}
		else {
			asteriskPos = i;
		}
	}

	for (int i = 0; i < 10; i++) {
		if ((digitSum + i) % 3 == 0) {
			inputString[asteriskPos] = char(leftBound + i);
			answer.push_back(inputString);
		}
	}

	return answer;
}
