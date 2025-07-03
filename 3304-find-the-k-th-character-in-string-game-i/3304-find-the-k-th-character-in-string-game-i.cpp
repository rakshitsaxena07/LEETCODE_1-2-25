class Solution {
public:
    char kthCharacter(int k) {
    vector<char> res;
    res.push_back('a');

    while (res.size() < k) {
        int sz = res.size();  // capture current size before appending
        for (int j = 0; j < sz; ++j) {
            char nextChar = (res[j] - 'a' + 1) % 26 + 'a';
            res.push_back(nextChar);
        }
    }

    return res[k - 1];
}

};