int magicalWell(int a, int b, int n) {
    int res = 0;
    while (n--) {
        res += a++ * b++;
    }
    return res;
}
