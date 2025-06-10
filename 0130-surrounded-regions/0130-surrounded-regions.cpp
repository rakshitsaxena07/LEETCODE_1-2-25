class Solution {
private:
    void dfs(int row,int column,vector<vector<int>> & vis,vector<vector<char>>& board,int drow[],int dcol[],int n,int m){
        vis[row][column]=1;
        for(int i=0;i<4;i++){
            int nrow=row+drow[i];
            int ncol=column+dcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0 && board[nrow][ncol]=='O'){
                dfs(nrow,ncol,vis,board,drow,dcol,n,m);
            }
        }

    }
public:
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        int drow[]={1,-1,0,0};
        int dcol[]={0,0,1,-1};

            vector<vector<int>>vis(n,vector<int>(m,0));//2D vector
            //to traverse accross the first row
            for(int j=0;j<m;j++){
                //to traverse accross the first row
                if(vis[0][j]==0&& board[0][j]=='O'){
                    dfs(0,j,vis,board,drow,dcol,n,m);
                }
                //to traverse accross the last row
                if(vis[n-1][j]==0 && board[n-1][j]=='O'){
                    dfs(n-1,j,vis,board,drow,dcol,n,m);
                }

            }
            for(int i=0;i<n;i++){
                //to traverse accross first column
                if(vis[i][0]==0 && board[i][0]=='O'){
                    dfs(i,0,vis,board,drow,dcol,n,m);
                }
                //to traverse last column
                if(vis[i][m-1]==0 && board[i][m-1]=='O'){
                    dfs(i,m-1,vis,board,drow,dcol,n,m);
                }

    }
    //To convert 'O'to X leaving boundary elements
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(vis[i][j]==0 && board[i][j]=='O'){
                        board[i][j]='X';
                       // vis[i][j]=1;
                    }
                }
            }
    }
};