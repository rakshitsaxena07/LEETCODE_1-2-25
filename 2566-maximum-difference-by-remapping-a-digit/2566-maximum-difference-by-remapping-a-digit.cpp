class Solution {
public:
    int minMaxDifference(int num) {
        
    string s = to_string(num);
    
    // Maximize
    string maxStr = s;
    char toReplaceMax = '\0';
    for (char c : s) {
        if (c != '9') {
            toReplaceMax = c;
            break;
        }
    }
    if (toReplaceMax != '\0') {
        for (char &c : maxStr) {
            if (c == toReplaceMax) c = '9';
        }
    }

    // Minimize
    string minStr = s;
    char toReplaceMin = '\0';
    for (char c : s) {
        if (c != '0') {
            toReplaceMin = c;
            break;
        }
    }
    if (toReplaceMin != '\0') {
        for (char &c : minStr) {
            if (c == toReplaceMin) c = '0';
        }
    }

    int maxVal = stoi(maxStr);
    int minVal = stoi(minStr);

    return maxVal - minVal;
}

};