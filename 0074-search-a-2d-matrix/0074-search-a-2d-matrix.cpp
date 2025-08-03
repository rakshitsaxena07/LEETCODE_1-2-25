class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>tmp(n*m);

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                tmp.push_back(matrix[i][j]);
            }
        }
        int low=0;
        int hi=tmp.size()-1;

        while(low<hi){
            int mid=low+(hi-low)/2;

            if(tmp[mid]==target){
                return 1;
            }
            else if(tmp[mid]>target){
                hi=mid-1;
            }
            else{low=mid+1;}
        }

        return 0;
    }
};