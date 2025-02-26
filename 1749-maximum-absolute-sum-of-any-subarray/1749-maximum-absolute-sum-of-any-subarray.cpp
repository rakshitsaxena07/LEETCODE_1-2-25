class Solution {
public:
    int minKadaneAlgo(vector<int>nums,int n){
         int maxi=INT_MIN;
     int sum=0;

     for(int i=0;i<n;i++){
        sum+=nums[i];
        maxi=max(maxi,sum);

        if(sum<0){
            sum=0;
        }

    
     }
        return maxi;
    }
    int maxKadaneAlgo(vector<int>nums,int n){
         int mini=INT_MAX;
     int sum=0;

     for(int i=0;i<n;i++){
        sum+=nums[i];
        mini=min(mini,sum);

        if(sum>0){
            sum=0;
        }

    
     }
        return mini;
    }
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int a=maxKadaneAlgo(nums,n);
        int b=minKadaneAlgo(nums,n);

        return max(abs(a),abs(b));
    }

    
};