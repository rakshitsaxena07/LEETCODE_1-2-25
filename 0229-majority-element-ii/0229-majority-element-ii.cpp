class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      unordered_map<int,int>ump;
      for(auto it:nums){
        ump[it]++;
      }  
      int thresh=nums.size()/3;
vector<int>res;
      for(auto it:ump){
        if(it.second>thresh){
            res.push_back(it.first);
        }
      }



      return res;
    }
};