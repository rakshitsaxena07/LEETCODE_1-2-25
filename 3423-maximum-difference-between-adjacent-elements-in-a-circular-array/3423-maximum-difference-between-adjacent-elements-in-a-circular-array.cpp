class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
       int maxi=0;
        for(int i=1;i<nums.size();i++){
            maxi=max(maxi, abs(nums[i]-nums[i-1]));
        }
    if(abs(nums[nums.size()-1] - nums[0]) >maxi){
        return abs(nums[nums.size () -1] - nums[0]);
    }

    return maxi;
    }
};