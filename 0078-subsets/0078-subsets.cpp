class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<int>subset;
       vector<vector<int>>res;
       if(nums.size()==0){
        return {{}};
       }
       subsetfunc(0,subset,nums,res);

       return res;
    }

    void subsetfunc(int index, vector<int> &subset, vector<int> &nums, vector<vector<int>> & res){
        if(index==nums.size()){
            res.push_back(subset);
            return;
        }

        subset.push_back(nums[index]);
        subsetfunc(index+1,subset,nums,res);

        subset.pop_back();
        
        subsetfunc(index+1,subset,nums,res);
    }
};