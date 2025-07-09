class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& pre) {
        int n=numCourses;
         vector<vector<int>> adj(n);
         for(int i=0;i<pre.size();i++){
            int u=pre[i][1];
            int v=pre[i][0];
            adj[u].push_back(v);
         }
         vector<int>indegree(n,0);
         for(int i=0;i<n;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
         }
         vector<int>res;
         queue<int>qu;
         for(int i=0;i<n;i++){
            if(indegree[i]==0)
            qu.push(i);////filling all preeeeesssreqqq
         }

         while(!qu.empty()){
            int node=qu.front();
            res.push_back(node);
            qu.pop();

            for(auto it:adj[node]){
                indegree[it]--;
                if(!indegree[it]){
                    qu.push(it);
                }
            }

         }

         return res.size() == n ? res : vector<int>{};


    }
};