class Solution {
public:
    int countHillValley(vector<int>& nums) {
 int count = 0;
    for (int i = 1; i< nums.size(); ++i) {
        if (nums[i] == nums[i - 1]) continue; // skip duplicates

        int left = i - 1;
        while (left >= 0 && nums[left] == nums[i]) left--;

        int right = i + 1;
        while (right < nums.size() && nums[right] == nums[i]) right++;

        if (left >= 0 && right < nums.size()) {
            if (nums[i] > nums[left] && nums[i] > nums[right]) count++; // hill
            else if (nums[i] < nums[left] && nums[i] < nums[right]) count++; // valley
        }
    }
    return count;
}
};