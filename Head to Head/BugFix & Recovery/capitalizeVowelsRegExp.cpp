/*
Given a string, capitalize each lowercase vowel (a, e, i, o, u, y) in it.

Example

For input = "There are 12 points", the output should be
capitalizeVowelsRegExp(input) = "ThErE ArE 12 pOInts".
*/
std::string capitalizeVowelsRegExp(std::string inputString) {
	std::string lowercaseVowels = "aeiouy";
	for (int i = 0; i < lowercaseVowels.length(); i++) {
		std::regex regExp = regex(string(1, lowercaseVowels[i]));
		std::string symbolToString = std::string(1, toupper(lowercaseVowels[i]));
		inputString = std::regex_replace(inputString,
			regExp, symbolToString);
	}
	return inputString;
}
