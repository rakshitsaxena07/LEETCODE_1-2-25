class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        if(nums.size()==1)
        return nums[0];

        if(nums[0]!=nums[1])
        return nums[0];
        //if(nums[])
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]!=nums[i] and nums[i]!=nums[i+1])
            return nums[i];
        }
        return -1;
    }
};