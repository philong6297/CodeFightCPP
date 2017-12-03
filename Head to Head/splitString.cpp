#include "Header.h"
/*
Split a given string into an array of words in it.
*/
std::vector<std::string> splitString(std::string str) {
	std::regex regex("\\w+\\s");
	std::smatch match;
	std::vector<std::string> slicedArray;
	str += " ";
	while (std::regex_search(str, match, regex)) {
		std::string matchString = match[0].str();
		slicedArray.push_back(matchString.substr(0, matchString.size() - 1));
		str = match.suffix().str();
	}
	return slicedArray;
}