/*
You intercept a note being passed between your classmates, and while trying to read it discover that it's encrypted. Since you're a fan of puzzles, you decide to crack the code. You know the following two details about the note:

Your classmates use a simple substitution cipher. It works as follows:
Consider the plaintext alphabet. Then take its permutation and call it a ciphertext alphabet.
Write down the ciphertext alphabet under the plaintext alphabet. Now the symbols that are located in the same column correspond to one another.
Now look through the message symbol by symbol and change each one to its replacement from the ciphertext alphabet.
The contents of the message are followed by a signature encrypted in the same way.
To be thorough, you make sure to iterate over all the ciphers satisfying the above-mentioned requirements. The most reasonable approach is to choose the one with lexicographically smallest ciphertext alphabet out of them.

Given the contents of the message, a signature and an encryptedSignature, what text will you end up with after applying the approach described above?

Example

For contents = "issomtoqmvjts", signature = "alice"

and encryptedSignature = "james", the output should be

substitutionCipherDecryption(contents, signature, encryptedSignature) = "keepitprivate".

Here is what we know for sure thanks to signature and encryptedSignature:

plaintext alphabet: abcdefghijklmnopqrstuvwxyz
ciphertext alphabet: j*e*s***m**a**************
Now let's choose the lexicographically smallest ciphertext alphabet out of all the candidates:

plaintext alphabet: abcdefghijklmnopqrstuvwxyz
ciphertext alphabet: jbecsdfgmhiaklnopqrtuvwxyz
You can see that 'i' from the ciphertext corresponds to 'k', 's' corresponds to 'e', etc.
*/
std::string substitutionCipherDecryption(std::string contents, std::string signature, std::string encryptedSignature) {
	string plain = "abcdefghijklmnopqrstuvwxyz";
	string cipher = "**************************";
	for (int i = 0; i<size(signature); i++)
		cipher[signature[i] - 'a'] = encryptedSignature[i],
		plain[encryptedSignature[i] - 'a'] = '*';
	for (int iCipher = 0, iPlain = 0; iCipher < 26 && iPlain < 26;)
		if (cipher[iCipher] == '*') {
			if (plain[iPlain] == '*')
				iPlain++;
			else cipher[iCipher] = plain[iPlain],
				iPlain++,
				iCipher++;
		}
		else
			iCipher++;
	map<char, char> decode;
	for (int i = 0; i<26; i++)
		decode[cipher[i]] = 'a' + i;
	for (auto &it : contents)
		it = decode[it];
	return contents;
}
