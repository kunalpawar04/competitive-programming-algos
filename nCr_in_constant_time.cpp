vector<long long> fact, invFact;

// Fast exponentiation (a^b % MOD)
long long power(long long a, long long b) {
    long long res = 1;
    while (b) {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    
    return res;
}

// Precompute factorials and inverse factorials
void init(int n) {
    fact.resize(n + 1);
    invFact.resize(n + 1);

    fact[0] = 1;
    for (int i = 1; i <= n; i++) {
        fact[i] = (fact[i - 1] * i) % mod;
    }

    // Fermat's Little Theorem for inverse
    invFact[n] = power(fact[n], mod - 2);
    for (int i = n - 1; i >= 0; i--) {
        invFact[i] = (invFact[i + 1] * (i + 1)) % mod;
    }
}

// Compute nCr in O(1)
long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;

    return fact[n] * invFact[r] % mod * invFact[n - r] % mod;
}
