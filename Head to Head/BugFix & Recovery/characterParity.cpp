/*
Given a character, check if it represents an odd digit, an even digit or not a digit at all.

Example

For symbol = '5', the output should be
characterParity(symbol) = "odd";
For symbol = '8', the output should be
characterParity(symbol) = "even";
For symbol = 'q', the output should be
characterParity(symbol) = "not a digit".
*/
std::string characterParity(char symbol) {
	std::string result;
	switch (symbol) {
	case '0':
	case '2':
	case '4':
	case '6':
	case '8':
		result = "even";
		break;
	case '1':
	case '3':
	case '5':
	case '7':
	case '9':
		result = "odd";
		break;
	default:
		result = "not a digit";
		break;
	}
	return result;
}
