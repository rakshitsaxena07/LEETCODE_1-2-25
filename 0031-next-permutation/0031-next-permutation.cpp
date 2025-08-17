class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    int pivot = nums.size() - 2;
    while (pivot >= 0 && nums[pivot] >= nums[pivot + 1]) {
        pivot--;
    }
    
    if (pivot == -1) {
        // Array is in descending order, reverse to get the first permutation
        reverse(nums.begin(), nums.end());
        return;
    }
    
    // Step 2: Find the swap
    int swap = nums.size() - 1;
    while (swap > pivot && nums[swap] <= nums[pivot]) {
        swap--;
    }
    
    // Swap the pivot and swap
    iter_swap(nums.begin() + pivot, nums.begin() + swap);
    
    // Step 3: Reverse the suffix
    reverse(nums.begin() + pivot + 1, nums.end());
}
};