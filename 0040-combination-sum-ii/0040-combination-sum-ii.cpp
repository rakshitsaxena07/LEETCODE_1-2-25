class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>path;
        sort(candidates.begin(),candidates.end());
        backtrack(candidates,target,0,path,res);

                return res; }

    void backtrack(vector<int>& candidates, int remaining, int index,vector<int> & path,      vector<vector<int>> &res){
        if(remaining==0){
            res.push_back(path);
            return;
        }

        for(int i=index;i<candidates.size();i++){
            if(i>index and candidates[i-1]==candidates[i]){
                continue;;
            }

            if(candidates[i]>remaining){
                break;
            }
            path.push_back(candidates[i]);
            backtrack(candidates,remaining-candidates[i],i+1,path,res);
            path.pop_back();
        }
    }
};