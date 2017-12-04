#include "Header.h"
/*
Given an array of strings, return another array containing all of its longest strings.

Example

For inputArray = ["aba", "aa", "ad", "vcd", "aba"], the output should be
allLongestStrings(inputArray) = ["aba", "vcd", "aba"].
*/

std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
	map<int, vector<string>> map;
	for (auto &it : inputArray)
		map[size(it)].push_back(it);
	return (*map.rbegin()).second;
}
