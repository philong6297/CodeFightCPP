/*
Given an array of strings, return another array containing all of its longest strings.

Example

For inputArray = ["aba", "aa", "ad", "vcd", "aba"], the output should be
allLongestStrings(inputArray) = ["aba", "vcd", "aba"].
*/
std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {

	std::vector<std::string> answer(1, inputArray[0]);
	for (int i = 1; i < inputArray.size(); i++) {
		if (inputArray[i].size() == answer[0].size()) {
			answer.push_back(inputArray[i]);
		}
		if (inputArray[i].size() > answer[0].size()) {
			answer = std::vector<std::string>(1, inputArray[i]);
		}
	}
	return answer;
}
