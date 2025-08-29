class Solution {
public:
    vector<vector<int>> rotate(vector<vector<int>>& mat){
        int n=mat.size();
        int m=mat[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                    swap(mat[i][j],mat[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(mat[i].begin(),mat[i].end());
        }

        return mat;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat==target){
        return 1;
        }
        int i=0;
            while(i<3){
                if(rotate(mat)==target){
                    return 1;
                }

                i++;
            }



            return 0;
    }
};