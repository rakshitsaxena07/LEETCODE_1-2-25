class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>ump;
        for(auto it:s){
            ump[it]++;
        }

        int maxi=0,mini=102;
        for(auto it:ump){
            if(it.second %2!=0){
                maxi=max(maxi,it.second);
            }
            else{
                mini=min(mini,it.second);
            }
        }

        return maxi-mini;
    }
};