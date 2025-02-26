class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return abs(nums[0]);
        }
   int maxi=0;
        for(int i=0;i<n;i++){
            int sum=nums[i];
            for(int j=i+1;j<n;j++){
                maxi=max(maxi,abs(sum));
                sum+=nums[j];
                maxi=max(maxi,abs(sum));
            }
        }
        return maxi;
        
    }
};