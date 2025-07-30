class Solution {
public:
    int longestSubarray(vector<int>& nums) {
         if (nums.empty()) {
            return 0;
        }
        int max_val = 0;
        for (int num : nums) {
            if (num > max_val) {
                max_val = num;
            }
        }
        int maxLength = 0;
        int currentLength = 0;
        for (int num : nums) {
            if (num == max_val) {
                currentLength++;
            } else {
                maxLength = std::max(maxLength, currentLength);
                currentLength = 0;
            }
        }
        maxLength = max(maxLength, currentLength);
        
        return maxLength;
    }
};