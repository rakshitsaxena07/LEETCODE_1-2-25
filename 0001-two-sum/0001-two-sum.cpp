class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>ump;//O(n) space compx
        vector<int>res(2,-1);
        for(int i=0;i<nums.size();i++){
            if(ump.find(target-nums[i])!=ump.end()){
                res[1]=ump[target-nums[i]];
                res[0]=i;
                return res;
            }
            else
            ump[nums[i]]=i;
        }
        
        return res;
        
    }
};