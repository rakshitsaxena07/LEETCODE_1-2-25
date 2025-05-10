class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
      long long sum1=0,sum2=0,c=0,c1=0;
        for(auto it: nums1){
           if(it==0)
           {
            c++;
            sum1+=1;
           continue;}
            
            sum1+=it;
        }

        for(auto it:nums2){
           if(it==0){
            c1++;
            sum2+=1;
            continue;
           } sum2+=it;
        }

        if(sum1<sum2 and c==0){
            return -1;
        }
        else if(sum1>sum2 and c1==0){
            return -1;
        }

return max(sum1,sum2);
    }
};