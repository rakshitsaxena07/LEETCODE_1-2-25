class Solution {
public:
    int search(vector<int>& nums, int target) {
        unordered_map<int,int>ump;
        for(int i=0;i<nums.size();i++){
            ump[nums[i]]=i;
        }
        for(auto it:ump){
            if(ump.find(target)!=ump.end()){
                return ump[target];
            }
        }
        return -1;
    }
};