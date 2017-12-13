/*
For a string consisting of only '('s and ')'s, determine if it is a regular bracket sequence or not.

Example

For sequence = "()()", the output should be
regularBracketSequence1(sequence) = true.

We could insert (1 + 2) * (2 + 4) which is a valid arithmetic expression, so the answer is true.
*/
bool regularBracketSequence1(std::string sequence) {
	int countOpen = 0;
	for (auto &it : sequence)
		if (it == '(') countOpen++;
		else if (it == ')' && --countOpen < 0) return false;
		return countOpen == 0;
}
