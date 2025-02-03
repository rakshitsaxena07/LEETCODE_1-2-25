class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return 1;

        int inc_len = 1, dec_len = 1, max_len = 1;

        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1]) { 
                inc_len++;
                dec_len = 1;
            } else if (nums[i] < nums[i - 1]) { 
                dec_len++;
                inc_len = 1;
            } else { 
                inc_len = 1;
                dec_len = 1;
            }
            max_len = max(max_len, max(inc_len, dec_len));
        }

        return max_len;
    }
};