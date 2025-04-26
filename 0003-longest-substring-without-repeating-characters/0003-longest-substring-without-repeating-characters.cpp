class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         unordered_map<char, int> ump;
    int i = 0, j = 0;
    int maxLength = 0;

    while (j < s.length()) {
        ump[s[j]]++;

        while (ump[s[j]] > 1) {
            ump[s[i]]--;
            i++;//shrinking
        }

        maxLength = max(maxLength, j - i + 1);
        j++;
    }

    return maxLength;
}
};