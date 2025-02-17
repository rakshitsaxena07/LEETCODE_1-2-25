class Solution {
public:
    void backtrack(string &tiles, vector<bool> &used, string &current, set<string> &st) {
    if (!current.empty()) {
        st.insert(current);
    }
    for (int i = 0; i < tiles.size(); i++) {
        if (!used[i]) {
            used[i] = true;
            current.push_back(tiles[i]);
            backtrack(tiles, used, current, st);
            current.pop_back();
            used[i] = false;
        }
    }
}

int numTilePossibilities(string tiles) {
    set<string> st;
    vector<bool> used(tiles.size(), false);
    string current;
    sort(tiles.begin(), tiles.end()); // To handle duplicate characters
    backtrack(tiles, used, current, st);
    return st.size();
}

};