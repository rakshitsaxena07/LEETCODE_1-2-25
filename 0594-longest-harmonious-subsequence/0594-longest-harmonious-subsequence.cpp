class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
  int maxi=0;
        for(auto it:mp){
            if(mp.count(it.first+1)){
                maxi=max(maxi,(mp[it.first]+mp[it.first+1]));
            }
        }

        return maxi;
    }
};