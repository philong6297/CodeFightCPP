/*
Given a string, find the number of different non-empty substrings in it.

Example

For inputString = "abac", the output should be
differentSubstrings(inputString) = 9.
They are:

"a", "b", "c",
"ab", ac", "ba",
"aba", "bac",
"abac"
*/
int differentSubstrings(std::string inputString) {
	set<string> diff;
	for (int l = 1; l <= size(inputString); l++)
		for (int i = 0; i <= size(inputString) - l; i++)
			diff.insert(inputString.substr(i, l));
	return size(diff);
}
