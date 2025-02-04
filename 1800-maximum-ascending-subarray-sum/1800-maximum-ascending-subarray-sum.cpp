class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
       if (nums.size() == 1) {
        return nums[0];
    }
    
    int n = nums.size();
    int sum = nums[0];  
    int maxi = -1;     
    for (int i = 1; i < n; i++) {
        if (nums[i] > nums[i - 1]) {  
            sum += nums[i]; 
        } else {
            maxi = max(maxi, sum);  
            sum = nums[i];  
        }
    }
    
    maxi = max(maxi, sum);  
    return maxi;
}
};