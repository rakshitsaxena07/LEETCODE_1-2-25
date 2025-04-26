class Solution {
public:
    int binarySearch(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return arr[mid];
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;  // Not found
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto it:matrix){
            if(binarySearch(it,target)==target){
                return 1;
            }
        }

        return 0;
    }
};