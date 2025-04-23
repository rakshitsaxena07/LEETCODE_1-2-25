class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        unordered_map<int,vector<int>>ump;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            ump[nums[i]].push_back(i);
        }
        if(ump.find(target)!=ump.end()){
            auto& res=ump[target];
            int n=res.size();
            ans.push_back(res[0]);
            ans.push_back(res[n-1]);

            return ans;

        }

        return {-1,-1};
    }
};