/*
You have a string s that consists of English letters, punctuation marks, whitespace characters, and
brackets. It is guaranteed that the parentheses in s form a regular bracket sequence.

Your task is to reverse the strings contained in each pair of matching parentheses, starting from
the innermost pair. The results string should not contain any parentheses.

Example

For string s = "a(bc)de", the output should be
reverseParentheses(s) = "acbde".
*/

std::string reverseParentheses(std::string s) {
    string temp;
    int countOpen = 0;
    for (int i = 0; i < size(s); i++) {
        countOpen = 0;
        if (s[i] != '(' && s[i] != ')')
            temp += s[i];
        else if (s[i] == '(') {
            countOpen = 1;
            for (int j = i + 1; j < size(s); j++) {
                if (s[j] == '(')
                    countOpen++;
                else if (s[j] == ')') {
                    countOpen--;
                    if (countOpen == 0) {
                        auto revereString =
                            reverseParentheses(string(begin(s) + i + 1, begin(s) + j));
                        reverse(begin(revereString), end(revereString));
                        temp += revereString;
                        i = j;
                        break;
                    }
                }
            }
        }
    }
    return temp;
}