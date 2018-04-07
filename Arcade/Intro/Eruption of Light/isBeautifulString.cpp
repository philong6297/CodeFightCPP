/*
A string is said to be beautiful if b occurs in it no more times than a; c occurs in it no more
times than b; etc.

Given a string, check whether it is beautiful.

Example

For inputString = "bbbaacdafe", the output should be
isBeautifulString(inputString) = true;
For inputString = "aabbb", the output should be
isBeautifulString(inputString) = false;
For inputString = "bbc", the output should be
isBeautifulString(inputString) = false.
*/
bool isBeautifulString(std::string inputString) {
    int count[26] = {0};
    for (auto &it : inputString)
        count[it - 97]++;
    for (int i = 0; i < 25; i++)
        if (count[i] < count[i + 1])
            return false;
    return true;
}
