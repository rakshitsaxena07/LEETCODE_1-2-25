class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int>res;
      set<int>st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            
            for(int j=0;j<n;j++){
                if(nums[j]==key){
                    if(abs(i-j)<=k){
                        st.insert(i);
                    }
                }
            }
        }

        for(auto it:st){
            res.push_back(it);
        }
return res;
    }
};