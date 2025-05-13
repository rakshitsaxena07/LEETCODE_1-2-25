class Solution {
public:
const long long MOD = 1e9 + 7;
    int lengthAfterTransformations(string s, int t) {
    vector<long long> counts(26, 0);  
   
    for (char c : s) {
        counts[c - 'a']++;
    }

    while (t--) {
        vector<long long> newCounts(26, 0);

        for (int i = 0; i < 26; ++i) {
            if (i == 25) {
                // 'z' becomes 'a' and 'b'
                newCounts[0] += counts[25]  % MOD;
                newCounts[1] += counts[25]  % MOD;
            } else {
                // 'a' to 'y' become next char
                newCounts[i + 1] += counts[i] % MOD;
            }
        }

        counts = newCounts;
    }

    // Final total length is sum of all counts
    long long total = 0;
    for (int i = 0; i < 26; ++i) {
        total = (total+counts[i]) % MOD;
    }

    return total;
}
};