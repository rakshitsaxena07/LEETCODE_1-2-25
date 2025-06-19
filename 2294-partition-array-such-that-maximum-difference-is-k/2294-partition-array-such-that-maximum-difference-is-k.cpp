class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
    int count = 1;
    int start = nums[0];  // start of current group

    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] - start > k) {
            count++;
            start = nums[i]; // start new group
        }
    }

    return count;}
};