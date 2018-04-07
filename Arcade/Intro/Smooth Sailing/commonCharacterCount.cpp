/*
Given two strings, find the number of common characters between them.

Example

For s1 = "aabcc" and s2 = "adcaa", the output should be
commonCharacterCount(s1, s2) = 3.

Strings have 3 common characters - 2 "a"s and 1 "c".
*/

int commonCharacterCount(std::string s1, std::string s2) {
    int table[26] = {0};
    int result    = 0;
    for (auto &it : s1)
        table[it - 97]++;
    for (auto &it : s2)
        result += (table[it - 97]-- > 0);
    return result;
}
