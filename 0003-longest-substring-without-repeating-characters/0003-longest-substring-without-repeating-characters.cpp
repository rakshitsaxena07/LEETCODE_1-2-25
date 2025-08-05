class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>ump;
        int left=0;
        int right=0;
        int maxLength=0;

      

            while(right<s.length()){
                ump[s[right]]++;

                while(ump[s[right]]>1){
                    ump[s[left]]--;//shrinking of window
                    left++;
                }
                maxLength=max(maxLength,right-left+1);
                right++;
            }



            return maxLength;
        
    }
};