/*
Given a string, find out if its characters can be rearranged to form a palindrome.

Example

For inputString = "aabb", the output should be
palindromeRearranging(inputString) = true.

We can rearrange "aabb" to make "abba", which is a palindrome.
*/
bool palindromeRearranging(std::string inputString) {
	map<char, int> countChar;
	for (auto &it : inputString)
		if (countChar.insert({ it,1 }).second == false)
			countChar[it]++;
	int countOdd = 0;
	for (auto &it : countChar)
		if (it.second & 1)
			if (++countOdd > 1) return false;
	return countOdd == 0 || size(inputString) & 1;
}
