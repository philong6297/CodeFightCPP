int leastFactorial(int n) {
    int k = 1, m = 1;
    while (k < n)
        k *= ++m;
    return k;
}
