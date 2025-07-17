class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {
      int n = nums.size();
    if (n == 0) return 0;
    
    // dp[i][r] = maximum length of subsequence ending at i with last sum mod k = r
    vector<vector<int>> dp(n, vector<int>(k, 1));
    int max_len = 1;
    
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            int r = (nums[j] + nums[i]) % k;
            dp[i][r] = max(dp[i][r], dp[j][r] + 1);
            max_len = max(max_len, dp[i][r]);
        }
    }
    
    return max_len;

}
};