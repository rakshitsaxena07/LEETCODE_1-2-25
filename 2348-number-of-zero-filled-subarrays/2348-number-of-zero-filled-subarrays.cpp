class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long res=0;
        int current=0;
        for(auto it:nums){
            if(it==0){
                current++;
                res+=current;
            }
            else{
                current=0;
            }
        }

        return res;
    }
};