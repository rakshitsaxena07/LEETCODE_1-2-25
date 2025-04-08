class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return 0;
      if(n==2){
        return nums[0]!=nums[1] ? 0 : 1 ;
      }
        if(n==3){
            if(nums[0]!=nums[1] && nums[0]!=nums[2] && nums[1]!=nums[2]){
                return 0; 
            }}
         unordered_map<int,int>ump;
        for(int i=0;i<n;i++){
            ump[nums[i]]++;
        }
        int c=0;
        for(auto it:ump){
            if(it.second>1){
                c++;
            }
        }
        if(c==0){
            return 0;
        }
        int g=0,i;
        for( i=0;i<n;i+=3){
            int tmp=i+3;
            while(i<tmp and i<n and tmp<n){
                i++;
            }
            g++;
        }
        if(n%3!=0){
            return g+1;
        }
        return g;
    }
};