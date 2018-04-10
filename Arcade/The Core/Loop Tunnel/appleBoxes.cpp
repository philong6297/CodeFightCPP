int appleBoxes(int k) {
    int res = 0;
    while (k > 0) {
        (k & 1) ? res -= k *k : res += k * k;
        --k;
    }
    return res;
}
