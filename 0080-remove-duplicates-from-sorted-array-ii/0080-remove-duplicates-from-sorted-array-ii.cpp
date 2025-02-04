class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      std::map<int, int> countMap;
    
    for (int num : nums) {
        countMap[num]++;
    }
    
    int index = 0;
    for (auto& pair : countMap) {
        int occurrences = std::min(pair.second, 2); // Ensure each unique element appears at most twice
        for (int i = 0; i < occurrences; ++i) {
            nums[index++] = pair.first;
        }
    }
    
    return index;
}
};