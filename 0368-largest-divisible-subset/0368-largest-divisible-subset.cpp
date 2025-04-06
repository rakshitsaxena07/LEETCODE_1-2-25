class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
       vector<int> tmp(n, 1);  // Stores LIS lengths
    vector<int> prevIndex(n, -1);  // Stores previous index for reconstruction

    int maxLength = 1, lastIndex = 0; // To track LIS end
sort(nums.begin(),nums.end());
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[i] % nums[j]==0 && tmp[i] < tmp[j] + 1) {
                tmp[i] = tmp[j] + 1;
                prevIndex[i] = j;  // Store previous index for LIS
            }
        }
        // Update max LIS length and last index
        if (tmp[i] > maxLength) {
            maxLength = tmp[i];
            lastIndex = i;
        }
    }

    // Reconstruct LIS using prevIndex
    vector<int> lis;
    for (int i = lastIndex; i >= 0; i = prevIndex[i]) {
        lis.push_back(nums[i]);
        if (prevIndex[i] == -1) break;
    }

    reverse(lis.begin(), lis.end());
    return lis;
}
};