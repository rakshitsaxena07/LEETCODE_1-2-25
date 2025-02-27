class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
         int n = arr.size();
    unordered_map<int, int> index; // Maps value to index
    vector<vector<int>> dp(n, vector<int>(n, 2)); // Stores sequence length
    int maxLen = 0;

    for (int i = 0; i < n; i++)
        index[arr[i]] = i; // Store indices of elements

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            int k = index.find(arr[i] - arr[j])!=index.end() ? index[arr[i] - arr[j]] : -1;
            if (k >= 0 && k < j) {
                dp[j][i] = dp[k][j] + 1;
                maxLen = max(maxLen, dp[j][i]);
            }
        }
    }

    return maxLen >= 3 ? maxLen : 0; // Return 0 if no valid sequence found
}
};