class Solution {
public:
    int maximumLength(vector<int>& nums) {
      if (nums.empty()) {
        return 0;
    }
    
    int even_count = 0;
    int odd_count = 0;
    int length_even = 0;  
    int length_odd = 0;   
    
    for (int num : nums) {
        if (num % 2 == 0) {
            even_count++;
            length_even = length_odd + 1;
        } else {
            odd_count++;
            length_odd = length_even + 1;
        }
    }
    
    int max_alternating = max(length_even, length_odd);
    return max({even_count, odd_count, max_alternating});
}
};