int mirrorBits(int a) {
    int r = 0;
    for (; a; a >>= 1)
        // shift r to left 1 bit for set this position = last bit of a;
        r = r << 1 | a & 1;
    return r;
}
