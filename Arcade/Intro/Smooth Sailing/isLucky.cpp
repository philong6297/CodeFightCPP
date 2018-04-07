/*
Ticket numbers usually consist of an even number of digits. A ticket number is considered lucky if
the sum of the first half of the digits is equal to the sum of the second half.

Given a ticket number n, determine if it's lucky or not.
*/

bool isLucky(int n) {
    auto stringValue = to_string(n);
    int sum          = 0;
    for (int i = 0; i < size(stringValue) / 2; i++)
        sum += stringValue[i] - stringValue[i + size(stringValue) / 2];
    return sum == 0;
}
