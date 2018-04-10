bool isPower(int n) {
    int divisorCount = 0; // count numbers of divisor in prime factorization
    int powerCount   = 0; // count numbers of current divisor
    int divisor      = 2; // current divisor to check
    int minPower     = 8; // 2^8 has max power and < 400
    int gcdPower     = 1;
    while (n > 1) {
        if (n % divisor == 0) {
            divisorCount++;
            powerCount = 1;
            n /= divisor;
            while (n % divisor == 0) {
                powerCount++;
                n /= divisor;
            }
            if (powerCount == 1)
                return false;
            if (minPower > powerCount)
                minPower = powerCount;
            if (divisorCount > 1) {
                gcdPower = gcd(gcdPower, powerCount);
                if (gcdPower == 1)
                    return false;
            }
            else
                gcdPower = powerCount;
            powerCount = 0;
        }
        else
            divisor++;
    }
    return true;
}
