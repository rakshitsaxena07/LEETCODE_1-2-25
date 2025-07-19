class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
      sort(folder.begin(), folder.end());
    vector<string> result;
    result.push_back(folder[0]);
    for (int i = 1; i < folder.size(); ++i) {
        const string& last = result.back();
        const string& current = folder[i];
        if (current.find(last + "/") != 0) {
            result.push_back(current);
        }
    }
    return result;
}
};