class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int> unique;
    for (int num : nums) {
        if (num < k) return -1;
        if (num > k) unique.insert(num);
    }

    if (unique.empty()) return 0;

    vector<int> values(unique.begin(), unique.end());
    sort(values.begin(), values.end(), greater<int>());

    return values.size();
}
};