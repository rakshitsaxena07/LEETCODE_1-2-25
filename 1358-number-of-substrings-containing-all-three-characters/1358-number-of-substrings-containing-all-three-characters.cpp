class Solution {
public:
 int numberOfSubstrings(string s) {
    unordered_map<char, int> freq;
    int left = 0, count = 0, n = s.size();

    for (int right = 0; right < n; right++) {
        freq[s[right]]++;  // Expand the window

        while (freq['a'] > 0 && freq['b'] > 0 && freq['c'] > 0) {  
            // Count all valid substrings ending at 'right'
            count += (n - right);
            
            // Shrink the window from the left
            freq[s[left]]--;
            left++;
        }
    }
    return count;
}
};