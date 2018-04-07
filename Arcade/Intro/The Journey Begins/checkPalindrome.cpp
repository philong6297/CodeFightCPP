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
    for (int i = 0; i < size(inputString) / 2; i++)
        if (inputString[i] != inputString[size(inputString) - 1 - i])
            return false;
    return true;
}
