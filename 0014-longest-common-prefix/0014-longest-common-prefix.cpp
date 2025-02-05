class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       if (strs.empty()) return "";
    std::sort(strs.begin(), strs.end());//the sorting is done lexicographically, 
    std::string first = strs.front();
    std::string last = strs.back();
    int i = 0;
    while (i < first.size() && first[i] == last[i]) {
        i++;
    }
    return last.substr(0, i);
    }
};