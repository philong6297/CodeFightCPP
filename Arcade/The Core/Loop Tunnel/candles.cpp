int candles(int candlesNumber, int makeNew) {
    int burned = 0, leftover = 0;
    while (candlesNumber > 0) {
        burned += candlesNumber;
        leftover += candlesNumber;
        candlesNumber = leftover / makeNew;
        leftover %= makeNew;
    }
    return burned;
}