class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<int, int> count;
    int result = 0;

    for (auto& d : dominoes) {
        int a = d[0], b = d[1];
        int key = min(a, b) * 10 + max(a, b);
        result += count[key];
        count[key]++;
    }

    return result;
}
      
};