/*
Given two strings, check whether it is possible to rearrange characters of the first string in such way that it will become equal to the second one.

Example

For string1 = "abcd" and string2 = "cbad", the output should be
charactersRearrangement(string1, string2) = true;
For string1 = "a" and string2 = "b", the output should be
charactersRearrangement(string1, string2) = false.
*/

bool charactersRearrangement(std::string string1, std::string string2) {
	sort(begin(string1), end(string1));
	sort(begin(string2), end(string2));
	return string1 == string2;
}
