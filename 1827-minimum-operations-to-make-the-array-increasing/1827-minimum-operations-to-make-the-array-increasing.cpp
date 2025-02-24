class Solution {
public:
    int minOperations(vector<int>& arr) {
        int n=arr.size();
        if(n==1)
        return 0;
    //sort(nums.begin(),nums.end());
    int incre=0;
    for(int i=1;i<n;i++){
        if(arr[i]<=arr[i-1]){
            int newval=arr[i-1]+1;
            incre+=newval-arr[i];
            arr[i]=newval;
        }
    }
return incre;
    }
};