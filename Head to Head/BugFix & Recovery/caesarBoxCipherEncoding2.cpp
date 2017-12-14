/*
Caesar Box is a simple transposition cipher used in the Roman Empire. It is described as the following two-step process:

The characters of the given message are broken into n lines of equal lengths and stacked up;
The letters from the resulting rectangle are written from top to bottom column by column.
Given a word, count the number of different n such that the message, obtained by applying encoding two times, is the same as initial message.

Example

For message = "abaaba", the output should be
caesarBoxCipherEncoding2(message) = 2.

It is possible to apply the encoding algorithm for n = 2 or n = 3.
For n = 2:

The first encoding: "abaaba" -> "aabbaa";

aba
aba
The second encoding: "aabbaa" -> "abaaba".

aab
baa
*/
int caesarBoxCipherEncoding2(std::string inputString) {

	struct Helper
	{
		std::string encode(std::string s, int n) {
			std::string res = "";
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < s.length() / n; j++) {
					res += s[j * n + i];
				}
			}
			return res;
		}
	};
	Helper h;

	int res = 0;
	int len = inputString.length();
	int sqrt_len = std::sqrt(len);
	for (int n = 2; n < sqrt_len + 1; n++) {
		if (len % n == 0) {
			if (h.encode(h.encode(inputString, n), n) == inputString) {
				res += 2;
			}
		}
	}

	if (sqrt_len * sqrt_len == len) {
		res--;
	}

	return res;
}