class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
     int n = grid.size();
    
    // Bottom-left triangle (including main diagonal) -> non-increasing
    for (int start_row = 0; start_row < n; ++start_row) {
        vector<int> diag;
        int i = start_row, j = 0;
        while (i < n && j < n) {
            diag.push_back(grid[i][j]);
            ++i;
            ++j;
        }
        sort(diag.begin(), diag.end(), greater<int>());
        i = start_row;
        j = 0;
        int k = 0;
        while (i < n && j < n) {
            grid[i][j] = diag[k++];
            ++i;
            ++j;
        }
    }
    
    // Top-right triangle (excluding main diagonal) -> non-decreasing
    for (int start_col = 1; start_col < n; ++start_col) {
        vector<int> diag;
        int i = 0, j = start_col;
        while (i < n && j < n) {
            diag.push_back(grid[i][j]);
            ++i;
            ++j;
        }
        sort(diag.begin(), diag.end());
        i = 0;
        j = start_col;
        int k = 0;
        while (i < n && j < n) {
            grid[i][j] = diag[k++];
            ++i;
            ++j;
        }
    }

    return grid;
}
};