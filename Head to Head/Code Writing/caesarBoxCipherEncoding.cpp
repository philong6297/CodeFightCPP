/*
Caesar Box is a simple transposition cipher used in the Roman Empire, in which characters of the given message are broken into multiple lines that form a square when stacked up and then read the square column by column.

Given a message, encode it.

Example

For inputString = "a message", the output should be
caesarBoxCipherEncoding(inputString) = "aea sgmse".

The square will look as follows:

a m
ess
age
Thus, the encoded message will be aea sgmse.
*/

std::string caesarBoxCipherEncoding(std::string inputString) {
	string ret;
	int square = sqrt(size(inputString));
	for (int i = 0; i<square; i++)
		for (int size = 0; size<square; size++)
			ret += inputString[i + size * square];
	return ret;
}
