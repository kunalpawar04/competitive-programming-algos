/*
    RANDOMIZED PREFIX HASHING (MULTISET HASHING)

    WHEN TO USE:
    - Compare subarrays based on element frequencies, NOT order.
    - Same elements in different orders should be considered equal.
    - Useful when performing repeated multiset equality queries.

    WORKING:
    1. Assign a random 64-bit hash to every possible element.
    2. Build prefix sums using hash values instead of actual elements:
           pref[i+1] = pref[i] + val[nums[i]]
    3. Get subarray hash in O(1):
           hash(l, r) = pref[r+1] - pref[l]
    4. Compare two subarrays by comparing their hashes.
       Same multiset => Same hash with high probability.

    COMPLEXITY:
    - Preprocessing: O(n + M), M = element value range.
    - Subarray hash query: O(1).
    - q comparisons: O(q) after preprocessing.
    - Space: O(n + M).

    LIMITATIONS:
    - Probabilistic: Different multisets can have hash collisions.
    - Uses unsigned 64-bit overflow (modulo 2^64).
    - Requires manageable value range or coordinate compression.
    - Cannot distinguish permutations (intentionally order-independent).

    NOTE:
    This is multiset hashing, NOT conventional rolling hash.
*/

class PrefixHash {
    using ull = unsigned long long;
    vector<ull> pref;

public:
    PrefixHash(vector<int> &nums, vector<ull> &val) {
        int n = nums.size();
        pref.assign(n + 1, 0);

        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + val[nums[i]];
        }
    }

    ull getHash(int l, int r) {
        return pref[r + 1] - pref[l];
    }
};
