class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int k=0;
        int j=0;
       

        for(auto it:nums){
            if(it<0){
                k++;
            }
            else if(it>0){
                j++;
            }
        }
        return max(k,j);
    }
};