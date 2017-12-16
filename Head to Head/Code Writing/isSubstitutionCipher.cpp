/*
A ciphertext alphabet is obtained from the plaintext alphabet by means of rearranging some characters. For example "bacdef...xyz" will be a simple ciphertext alphabet where a and b are rearranged.

A substitution cipher is a method of encoding where each letter of the plaintext alphabet is replaced with the corresponding (i.e. having the same index) letter of some ciphertext alphabet.

Given two strings, check whether it is possible to obtain them from each other using some (possibly, different) substitution ciphers.

Example

For string1 = "aacb" and string2 = "aabc", the output should be
isSubstitutionCipher(string1, string2) = true.

Any ciphertext alphabet that starts with acb... would make this transformation possible.

For string1 = "aa" and string2 = "bc", the output should be
isSubstitutionCipher(string1, string2) = false.
*/
bool isSubstitutionCipher(std::string string1, std::string string2) {
	map<char, char> encode;
	for (int i = 0; i<size(string2); i++)
		if (encode.insert({ string2[i],string1[i] }).second == false && encode[string2[i]] != string1[i])
			return false;
	encode.clear();
	for (int i = 0; i<size(string1); i++)
		if (encode.insert({ string1[i],string2[i] }).second == false && encode[string1[i]] != string2[i])
			return false;
	return true;
}
