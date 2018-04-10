bool increaseNumberRoundness(int n) {
    int zeroCount = 0, roundness = 0;
    [&zeroCount, n]() mutable {
        while (n > 0) {
            zeroCount += (n % 10 == 0);
            n /= 10;
        }
    }();

    [&roundness, n]() mutable {
        while (n % 10 == 0) {
            roundness++;
            n /= 10;
        }
    }();
    return roundness < zeroCount;
}
