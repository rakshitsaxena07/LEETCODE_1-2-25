class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mp;

        for(auto it:nums){
            if(it%2==0){
                mp[it]++;
            }
        }

        int maxi=0;
        for(auto it:mp){
                maxi=max(maxi,it.second);
        }
        for(auto it:mp){
            if(it.second==maxi){
                return it.first;
            }
        }

        return -1;
    }
};