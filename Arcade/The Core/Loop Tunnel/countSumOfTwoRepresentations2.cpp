int countSumOfTwoRepresentations2(int n, int l, int r) {
    int a = max(n - r, l), b = min(n - l, r);
    if (b < a)
        return 0;
    return (b - a) / 2 + 1;
}
