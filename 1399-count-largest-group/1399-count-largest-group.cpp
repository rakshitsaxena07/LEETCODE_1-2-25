class Solution {
public:
    int countLargestGroup(int n) {
      unordered_map<int, int> digitSumCount;
    
    for (int i = 1; i <= n; i++) {
        int sum = 0, tmp = i;
        while (tmp > 0) {
            sum += tmp % 10;
            tmp /= 10;
        }
        digitSumCount[sum]++;
    }

    int maxSize = 0;
    for (auto& it : digitSumCount) {
        maxSize = max(maxSize, it.second);
    }

    int count = 0;
    for (auto& it : digitSumCount) {
        if (it.second == maxSize) {
            count++;
        }
    }

    return count;
}
};