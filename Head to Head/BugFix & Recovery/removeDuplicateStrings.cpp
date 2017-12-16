/*
Remove all duplicates from an already sorted (in lexicographical order) array of strings.

Example

For inputArray = ["a", "a", "ab", "ab", "abc"], the output should be
removeDuplicateStrings(inputArray) = ["a", "ab", "abc"].
*/
std::vector<std::string> removeDuplicateStrings(std::vector<std::string> inputArray) {
	std::vector<std::string> result;
	for (int i = 0; i < inputArray.size(); i++) {
		if (i + 1 < inputArray.size() && inputArray[i] == inputArray[i + 1]) {
			continue;
		}
		result.push_back(inputArray[i]);
	}
	return result;
}
