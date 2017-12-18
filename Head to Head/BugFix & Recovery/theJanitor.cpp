/*
In one city it is allowed to write words on the buildings walls. The local janitor, however, doesn't approve of it at all. Every night he vandalizes the writings by erasing all occurrences of some letter. Since the janitor is quite lazy, he wants to do this with just one swipe of his mop.

Given a word, find the minimum width of the mop required to erase each of the letters.

Example

For word = "abacaba", the output should be
theJanitor(word) = [7, 5, 1, 0, 0, ..., 0, 0] (26 elements altogether).
*/
std::vector<int> theJanitor(std::string word) {

	std::vector<int> left(26),
		right(26);
	std::vector<bool> was(26, false);

	for (int i = 0; i < word.size(); i++) {
		int c = word[i] - 'a';
		if (!was[c]) {
			left[c] = i;
			was[c] = true;
		}
		right[c] = i;
	}

	std::vector<int> ans(26);
	for (int i = 0; i < 26; i++) {
		ans[i] = was[i] ? right[i] - left[i] + 1 : 0;
	}
	return ans;
}
