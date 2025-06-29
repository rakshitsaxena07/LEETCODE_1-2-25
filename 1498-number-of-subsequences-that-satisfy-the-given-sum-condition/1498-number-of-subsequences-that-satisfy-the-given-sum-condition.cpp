class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
          const int MOD = 1e9 + 7;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> pow2(n, 1);
        for (int i = 1; i < n; i++)
            pow2[i] = (pow2[i - 1] * 2) % MOD;
        
        int ans = 0, left = 0, right = n - 1;

        while (left <= right) {
            if (nums[left] + nums[right] <= target) {
                ans = (ans + pow2[right - left]) % MOD;
                left++;
            } else {
                right--;
            }
        }
        return ans;
    }
};