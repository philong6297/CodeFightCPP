/*
Given the string, check if it is a palindrome.

Example

For inputString = "aabaa", the output should be
checkPalindrome(inputString) = true;
For inputString = "abac", the output should be
checkPalindrome(inputString) = false;
For inputString = "a", the output should be
checkPalindrome(inputString) = true.
*/
bool checkPalindrome(std::string inputString) {

	bool isPalindrome = true;
	for (int i = 0; i < inputString.size(); i++) {
		if (inputString[i] != inputString[(int)inputString.size() - i - 1]) {
			isPalindrome = false;
			break;
		}
	}

	return isPalindrome;
}
