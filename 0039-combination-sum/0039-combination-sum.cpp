class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      vector<vector<int>> result;
        vector<int> path;
        sort(candidates.begin(), candidates.end());
        backtrack(candidates, target, 0, path, result);
        return result;
    }


     void backtrack(const vector<int>& candidates, int remaining, int start, vector<int>& path, vector<vector<int>>& result) {
        if (remaining == 0) {
            result.push_back(path);
            return;
        }
        for (int i = start; i < candidates.size(); ++i) {
            if (candidates[i] > remaining) {
                continue;
            }
            path.push_back(candidates[i]);
            backtrack(candidates, remaining - candidates[i], i, path, result);
            path.pop_back();
        }
    }
};