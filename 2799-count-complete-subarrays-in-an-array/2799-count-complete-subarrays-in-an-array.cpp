class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        unordered_set<int>ts;
        for(auto it:nums){
            ts.insert(it);
        }

        int k=ts.size();
        for(int i=0;i<n;i++){
            unordered_set<int>st;
            for(int j=i;j<n;j++){
               st.insert(nums[j]);
               if(st.size()==k){
                c++;
            }
            }

                    }


        return c;
    }
};