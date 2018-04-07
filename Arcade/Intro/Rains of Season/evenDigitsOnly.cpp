/*
Check if all digits of the given integer are even.

Example

For n = 248622, the output should be
evenDigitsOnly(n) = true;
For n = 642386, the output should be
evenDigitsOnly(n) = false.
*/

bool evenDigitsOnly(int n) {
    while (n) {
        if (n % 10 & 1)
            return false;
        n /= 10;
    }
    return true;
}
