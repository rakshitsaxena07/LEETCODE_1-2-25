class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
         unordered_set<int> result;
    unordered_set<int> current;
    for (int num : arr) {
        unordered_set<int> temp;
        temp.insert(num);
        for (int val : current) {
            temp.insert(val | num);
        }
        current = temp;
        result.insert(current.begin(), current.end());
    }
    return result.size();
}
};