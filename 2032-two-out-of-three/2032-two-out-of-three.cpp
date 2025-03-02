class Solution {
public:
vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
    unordered_map<int, int> freq;  // Tracks occurrence across arrays

    // Using unordered sets to store unique elements in each array
    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> set2(nums2.begin(), nums2.end());
    unordered_set<int> set3(nums3.begin(), nums3.end());

    // Mark presence in each set
    for (int num : set1) freq[num]++;
    for (int num : set2) freq[num]++;
    for (int num : set3) freq[num]++;

    vector<int> res;
    for (auto it : freq) {
        if (it.second >= 2) {  // Appears in at least two arrays
            res.push_back(it.first);
        }
    }

    return res;
}
};