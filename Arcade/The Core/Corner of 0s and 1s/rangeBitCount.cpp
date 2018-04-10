int rangeBitCount(int a, int b) {
    int count = 0;
    int temp;
    while (a <= b) {
        temp = a++;
        while (temp) {
            count += temp & 1;
            temp >>= 1;
        }
    }
    return count;
}
