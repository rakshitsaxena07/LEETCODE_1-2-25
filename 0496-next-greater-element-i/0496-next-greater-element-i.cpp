class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      stack<int> st;
    unordered_map<int, int> nextGreater;
    vector<int> result;
    
    // Process nums2 to find next greater elements for all elements
    for (int num : nums2) {
        while (!st.empty() && st.top() < num) {
            nextGreater[st.top()] = num;
            st.pop();
        }
        st.push(num);
    }
    
    // The remaining elements in stack have no next greater element
    while (!st.empty()) {
        nextGreater[st.top()] = -1;
        st.pop();
    }
    
    // Now answer queries from nums1 using the map
    for (int num : nums1) {
        result.push_back(nextGreater[num]);
    }
    
    return result;
}
};