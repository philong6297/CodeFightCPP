int additionWithoutCarrying(int param1, int param2) {
    int res = 0, degree = 1;
    while (param1 > 0 || param2 > 0) {
        res = ((param1 % 10 + param2 % 10) % 10) * degree + res;
        param1 /= 10;
        param2 /= 10;
        degree *= 10;
    }
    return res;
}