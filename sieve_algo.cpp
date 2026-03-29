void sieveOfEratosthenes(int limit) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;  // 0 and 1 are not prime numbers

    for (int i = 2; i * i <= limit; ++i) {
        if (isPrime[i]) {
            // Mark multiples of i as non-prime
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Print the prime numbers
    cout << "Prime numbers up to " << limit << ": ";
    for (int i = 2; i <= limit; ++i) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}
