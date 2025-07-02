class Solution {
public:
    int lastIndex(vector<int>& nums, int target, int n){
        int lo=0,hi=n-1;
        int mid=lo+(hi-lo)/2;
        int indx=-1;
        while(lo<=hi){
                  int mid=lo+(hi-lo)/2;
            if(target>=nums[mid]){
                 if (nums[mid] == target)
                 indx=mid;
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }

        return indx;
    }
    int firstIndex(vector<int>& nums, int target, int n){
                 int lo=0,hi=n-1;
               
                 int indx=-1;
        while(lo<=hi){
              int mid=lo+(hi-lo)/2;
            if(target<=nums[mid]){
                 if (nums[mid] == target)
                 indx=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }

        return indx;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>res(2,-1);
        int n=nums.size();
        res[0]=firstIndex(nums,target,n);
        res[1]=lastIndex(nums,target,n);

        return res;
    }
};