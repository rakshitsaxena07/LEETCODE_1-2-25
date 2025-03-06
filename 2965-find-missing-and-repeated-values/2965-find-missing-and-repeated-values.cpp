class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
      unordered_map<int,int>ump;
      int n=grid[0].size();
int sum=0;
      for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ump[grid[i][j]]++;
                sum+=grid[i][j];
            }
      }
      int dup;
      int x=1;
      for(auto it:ump){

        if(it.second>=2){
            dup=it.first;
        }
      }
      sum-=dup;
     int fsum=(n*n*((n*n)+1))/2;
      int miss=fsum-sum;
return{dup,miss};
    }
};