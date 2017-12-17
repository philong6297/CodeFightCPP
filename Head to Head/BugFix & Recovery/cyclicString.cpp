/*
You're given a substring s of some cyclic string. What's the length of the smallest possible string that can be concatenated to itself many times to obtain this cyclic string?

Example

For s = "cabca", the output should be
cyclicString(s) = 3.

"cabca" is a substring of a cycle string "abcabcabcabc..." that can be obtained by concatenating "abc" to itself. Thus, the answer is 3.
*/
int cyclicString(std::string s1) {

	for (int answer = 1; answer < s1.size(); answer++) {
		bool correct = true;
		for (int position = answer; position < s1.size(); position++) {
			if (s1[position] != s1[position - answer]) {
				correct = false;
				continue;
			}
		}
		if (correct) {
			return answer;
		}
	}
	return s1.size();
}