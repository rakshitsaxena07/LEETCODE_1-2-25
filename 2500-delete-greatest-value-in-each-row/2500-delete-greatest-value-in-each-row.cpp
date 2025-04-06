class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
       for (auto& row : grid) {
        sort(row.begin(), row.end()); 
    }

    int answer = 0;
    int cols = grid[0].size();

    for (int j = cols - 1; j >= 0; --j) {//it decreases the size of matrix
        int maxVal = 0;
        for (int i = 0; i < grid.size(); ++i) {//it changes row
            maxVal = max(maxVal, grid[i][j]);
        }
        answer += maxVal;
    }

    return answer;}
};