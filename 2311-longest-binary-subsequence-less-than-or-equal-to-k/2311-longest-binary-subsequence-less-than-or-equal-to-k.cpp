class Solution {
public:
    int longestSubsequence(string s, int k) {
          string nums = "";
        for (int i = s.size() - 1; i >= 0; i--) { // read from right
            nums = s[i] + nums; // prepend current bit

            // Convert binary string to integer (if possible)
            long long val = 0;
            for (char c : nums) {
                val = val * 2 + (c - '0');
                if (val > k) break; // early break if value exceeds k
            }

            if (val > k) {
                return count(s.begin(), s.begin() + i + 1, '0') + nums.size() - 1;
            }
        }
        return s.size();  
    }
};