/*
When you have free time, you enjoy cracking ciphers. But to crack a cipher you need some ciphered text, and preparing it yourself is way too boring. So, you decide to implement an algorithm that will encode text for you.

After some research you choose the famous Nihilist cipher, and here is how it works (please note that this task uses the modified version of the cipher, so it can differ from what you might already know):

Build a 5 × 5 Polybius square for the given keyword consisting of distinct letters:
first, fill the square with the letters of the keyword row by row.
then, continue filling the square with all the letters in alphabetical order except for those that are already in the square.
add the final (26th) letter to the cell with coordinates (row, column).
Now each letter can be associated with two integers, the indices of a row and a column of the Polybius square containing it. In order to encode a letter, replace it with a concatenation of string representations of these two integers.
Make the lengths of the given plaintext message and the keyword equal (if one string is shorter than another one, consider the cyclic string obtained from it and take its prefix of the length equal to the length of the longer string).
Finally, encode the letters of both strings obtained on the previous step and add up the values at the same positions. The resulting list of integers is the desired ciphertext.
Given some plaintext to encode, a keyword and the coordinates of a Polybius square cell which will contain two letters, return the encoded text.

Example

For plaintext = "codefights", keyword = "keyword", row = 1 and column = 2, the output should be
nihilistCipher(plaintext, keyword, row, column) = [36, 27, 35, 26, 46, 55, 54, 44, 64, 64].
*/

std::vector<int> nihilistCipher(std::string plaintext, std::string keyword, int row, int column) {
	vector<bool> inserted(26, 0);
	string polybiusAlphabet = keyword;
	for (auto &it : keyword)
		inserted[it - 'a'] = 1;
	for (auto &it : string("abcdefghijklmnopqrstuvwxyz"))
		if (!inserted[it - 'a'])
			polybiusAlphabet += it;
	map<char, int> polybiusEncode;
	int charIndex = 0;
	for (int i = 1; i <= 5; i++)
		for (int j = 1; j <= 5; j++)
			polybiusEncode[polybiusAlphabet[charIndex++]] = i * 10 + j;
	polybiusEncode[polybiusAlphabet[charIndex]] = row * 10 + column;
	if (size(plaintext) <size(keyword))
	{
		while (size(plaintext) <size(keyword))
			plaintext += plaintext.substr(0, size(keyword) - size(plaintext));
	}
	else {
		while (size(plaintext) > size(keyword))
			keyword += keyword.substr(0, size(plaintext) - size(keyword));
	}
	vector<int> ret(size(plaintext));
	for (int i = 0; i<size(keyword); i++)
		ret[i] = polybiusEncode[plaintext[i]] + polybiusEncode[keyword[i]];
	return ret;
}
