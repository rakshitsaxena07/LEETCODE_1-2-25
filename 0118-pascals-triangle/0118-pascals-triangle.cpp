class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> ans(numRows);
   
    for(int i = 0; i < numRows; i++) {
        vector<int> sub(i + 1);
        sub[0] = 1;
        sub[i] = 1;
     
        for(int j = 1; j < i; j++) {
            sub[j] = ans[i - 1][j - 1] + ans[i - 1][j];
        }
        ans[i] = sub;
    }
    
    return ans;
}

};