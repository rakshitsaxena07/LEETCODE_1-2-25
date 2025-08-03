class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int n=nums.size();
        vector<int>ve(n,0);//initially all 0
        for(int i=0;i<n;i++){
            int t=nums[i];
            if(ve[t]==0){
                ve[t]=1;//to mark visited
            }
            else{
                return t;
            }
        }
        return 0;
    }
};