/*
Consider the following operation on a string containing digits from 1 to 9:

if the leftmost digit of the string is divisible by 3, remove it from the string;
otherwise, if the rightmost digit of the string is divisible by 3, remove it from the string;
otherwise, if the sum of two digits on the sides of the string is divisible by 3, remove both digits from the string;
This operation is applied sequentially until the string is empty or neither of the three given conditions is met.

For a given string find the result of applying the given algorithm to it.

Example

For s = "312248", the output should be
truncateString(s) = "2".

Here's how the answer is obtained:

3 is divisible by 3 and should be removed ("12248");
neither 1 nor 8 is divisible by 3, but their sum is, so both digits should be removed ("224");
neither 2 nor 4 is divisible by 3, but their sum is, so both digits should be removed ("2");
the resulting string "2" doesn't meet any condition, so it is the final answer.
*/
std::string truncateString(std::string s) {

	struct Helper {
		std::string s;

		Helper(std::string s) : s(s) { }

		std::string truncate(int l, int r) {
			if (l >= r) {
				return "";
			}
			int newL = l;
			int newR = r;
			int left = s[l] - '0';
			int right = s[r - 1] - '0';
			if (left % 3 == 0) {
				newL++;
			}
			else if (right % 3 == 0) {
				newR--;
			}
			else if ((left + right) % 3 == 0) {
				newL++;
				newR--;
			}
			else {
				return s.substr(l, r - l);
			}

			return truncate(newL, newR);
		}
	};
	Helper h(s);

	return h.truncate(0, s.size());
}

