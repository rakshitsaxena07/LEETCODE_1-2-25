class Solution {
    private:
    void dfs(int node, vector<int> adjls[], vector<int>& visarr) {
        visarr[node] = 1;
        for(auto it : adjls[node]) {
            if(visarr[it] == 0) {//going in depth
                dfs(it, adjls, visarr);
            }
        }
    }


public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();//to find no.of rows(nodes)
        vector<int> adjls[V];//creating an adjacency list to store adjacent connections
        for(int i = 0; i < V; i++) {
            for(int j = 0; j < V; j++) {
                if(isConnected[i][j] == 1 && i != j) {//to identify edge connections
                //if 1 is connected to 2 then vice versa also true
                    adjls[i].push_back(j);
                    //at index 1, 2 will be stored and vice versa
                    adjls[j].push_back(i);
                }
            }
        }
        vector<int> visarr(V, 0);//creating visited array with 0 value
        int c = 0;
        for(int i = 0; i < V; i++) {
            if(visarr[i] == 0) {//to figure out starting point
                c++;
                dfs(i, adjls, visarr);
               
            }
        }
        return c;
    }

};