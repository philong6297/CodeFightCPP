/*
You are given a two-digit integer n. Return the sum of its digits.

Example

For n = 29, the output should be
addTwoDigits(n) = 11.
*/
int addTwoDigits(int n) {
    int sum = 0;
    while (n)
        sum += n % 10, n /= 10;
    return sum;
}
