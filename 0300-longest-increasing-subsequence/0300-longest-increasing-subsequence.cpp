class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>tmp(n);
        for(int i=0;i<n;i++){
            tmp[i]=1;
        }
       for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(nums[j]<nums[i]){
                tmp[i]=max(tmp[i],tmp[j]+1);
            }
        }
       }
     return *max_element(tmp.begin(), tmp.end());
    }
};