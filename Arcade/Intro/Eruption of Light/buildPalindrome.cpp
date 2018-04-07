/*
Given a string, find the shortest possible string which can be achieved by adding characters to the
end of initial string to make it a palindrome.

Example

For st = "abcdc", the output should be
buildPalindrome(st) = "abcdcba".
*/
std::string buildPalindrome(std::string st) {
    /*
     * O(n) solution:
     *Build reverse. Check if original == reverse. If so, we are done.
     *Imagine that you are pushing the two strings "under" each other. e.g.: you want to push
     *"abecxyxc" string over its reverse "cxyxceba" character by character. You do this until the
     *two strings completely overlap. Now on each push, you check whether the currently overlapping
     *parts are equal. If so, you store the "depth" in a variable. This when you finished pushing
     *one string over anohter you have a "maximum" depth. Simply return st +
     *reverse.substring(depth);
     */
    string rev = st;
    reverse(begin(rev), end(rev));
    int depth = 0;
    for (int i = st.find(rev[0]); i < size(st); i++)
        if (rev[depth] == st[i])
            depth++;
        else
            depth = 0;
    return st + rev.substr(depth);
}