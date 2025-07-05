class Solution {
public:
    int findLucky(vector<int>& arr) {
       unordered_map<int,int>ump;
       for(auto it:arr){
        ump[it]++;
       }
       int maxi=-1;
       for(auto it:ump){
        if(it.first==it.second){
            maxi=max(maxi,it.first);
        }
       }

       return maxi;
    }
};