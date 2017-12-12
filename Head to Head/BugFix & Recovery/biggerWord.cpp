/*
Given a word w, rearrange the letters of w to construct another word s in such a way that s is lexicographically greater than w. In case of multiple possible answers, find the lexicographically smallest one. If there is no answer, return string 'no answer'.

Example

For w = "fbcedba", the output should be
biggerWord(w) = "fbdabce";
For w = "zyx", the output should be
biggerWord(w) = "no answer".
*/
std::string biggerWord(std::string w) {

	int leftSwap = -1;
	for (int i = (int)w.size() - 2; i >= 0; i--) {
		if (w[i] < w[i + 1]) {
			leftSwap = i;
			break;
		}
	}
	if (leftSwap == -1) {
		return "no answer";
	}

	int rightSwap = (int)w.size() - 1;
	while (w[leftSwap] >= w[rightSwap]) {
		rightSwap--;
	}
	std::swap(w[leftSwap++], w[rightSwap]);
	rightSwap = (int)w.size() - 1;
	while (leftSwap < rightSwap) {
		sort(begin(w) + leftSwap++, end(w));
	}
	return w;
}
