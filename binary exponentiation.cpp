long long binaryExponentiation(long long base, long long exponent) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % 1000000007;
        }
        base = (base * base) % 1000000007; // Square the base
        exponent /= 2;                     // Divide the exponent by 2
    }
    return result;
}
