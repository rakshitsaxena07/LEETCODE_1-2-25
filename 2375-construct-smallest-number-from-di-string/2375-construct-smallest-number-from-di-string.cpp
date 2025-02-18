class Solution {
public:
    string smallestNumber(string pattern) {
         string result;
    stack<int> st;
    int num = 1; // Start placing numbers from '1' to '9'

    for (int i = 0; i <= pattern.size(); i++) {
        st.push(num++);  // Push the next number

        // If it's 'I' or the last element, start popping
        if (i == pattern.size() || pattern[i] == 'I') {
            while (!st.empty()) {
                result += (st.top() + '0'); // Convert to char and append
                st.pop();
            }
        }
    }
    return result;
}
};