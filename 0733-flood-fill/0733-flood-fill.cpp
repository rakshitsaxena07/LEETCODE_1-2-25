class Solution {
private:
      void dfstra(vector<vector<int>> &image, int row, int column, int inicol, int newcol, int deltarow[], int deltacol[]) {
    image[row][column] = newcol;//assigning the new color
    
    int n = image.size(); // for row size
    int m = image[0].size(); // for column size:it calculates no.of elements in 0th row
    // since every time 4 adj will be found
    for (int i = 0; i < 4; i++) {
        int nrow = row + deltarow[i];
        int ncol = column + deltacol[i];
        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && image[nrow][ncol] == inicol && image[nrow][ncol] != newcol) {
            dfstra(image, nrow, ncol, inicol, newcol, deltarow, deltacol);//recursively traversing DFS
        }
    }
}

public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color) {
        int inicol = image[sr][sc];
        //vector<vector<int>> res = image;
        int deltarow[] = {-1,1,0,0};
        int deltacol[] = {0,0,-1,1};
        dfstra(image, sr, sc, inicol, color, deltarow, deltacol);
        return image;
    }

};