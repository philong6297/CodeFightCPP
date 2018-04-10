int swapAdjacentBits(int n) {
    return [=]() -> int {
        bitset<32> bit(n);
        for (size_t i = 0; i < 32; i += 2) {
            if (bit[i] != bit[i + 1]) {
                bit.flip(i);
                bit.flip(i + 1);
            }
        }
        return bit.to_ulong();
    }();
}
