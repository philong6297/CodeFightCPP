int equalPairOfBits(int n, int m) {
    return [=]() -> int {
        bitset<32> N(n), M(m);
        for (size_t i = 0; i < 32; i++)
            if (N[i] == M[i])
                return 1 << i;
    }();
}