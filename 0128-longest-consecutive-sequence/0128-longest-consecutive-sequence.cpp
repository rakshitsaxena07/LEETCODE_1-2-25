class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int maxiLen=0;

        for(auto it:st){
            if(!st.count(it-1)){
                int startNum=it;
                int count=1;

                while(st.count(startNum+1)){
                    startNum+=1;
                    count++;
                }
                //maxiLen=max(maxiLen,count);
            }
             maxiLen=max(maxiLen,count);
        }

        return maxiLen;
    }
};