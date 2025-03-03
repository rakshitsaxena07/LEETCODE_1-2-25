class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int>res;

        for(auto it:nums){
            if(it<pivot){
                res.push_back(it);
            }
        }
        for(auto it:nums){
            if(it==pivot){
                res.push_back(it);
            }
        }

         for(auto it:nums){
            if(it>pivot){
                res.push_back(it);
            }
        }
        return res;
    }
};