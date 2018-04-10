int rounders(int value) {
    int degree = 1;
    bool carry = false;
    while (value / 10 > 0) {
        carry = value % 10 >= 5;
        value /= 10;
        value += carry;
        degree *= 10;
    }
    return value * degree;
}