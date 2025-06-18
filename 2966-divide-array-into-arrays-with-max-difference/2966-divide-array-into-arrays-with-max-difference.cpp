class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>res;
        int j=0;
        int a=n/3;
        while(a){
            vector<int>tmp;
            for(int i=0;i<3;i++){
                if(j<nums.size())
                tmp.push_back(nums[j]);
                j++;

            }
            res.push_back(tmp);
          a--;
        }

        for(auto it:res){
            if(it[2]-it[0]>k)
            return {};

        }

        return res;
    }
};