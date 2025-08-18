class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();
        for(int i=n-1;i>=0;i--){
            mp[nums[i]]++;
            nums.pop_back();
        }
        for(auto it : mp){
            while(it.second>0){
                int tmp=it.first;
                nums.push_back(tmp);
                it.second--;
            }
        }
    }
};