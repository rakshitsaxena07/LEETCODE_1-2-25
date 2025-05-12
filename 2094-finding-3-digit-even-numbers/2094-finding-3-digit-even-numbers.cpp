class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        sort(digits.begin(),digits.end());
        set<int > res;

    int n = digits.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                if (i == j || j == k || i == k) continue;

                int a = digits[i], b = digits[j], c = digits[k];

                if (a == 0) continue;         // No leading 0
                if (c % 2 != 0) continue;     // Must be even

                int num = a * 100 + b * 10 + c;
                //if(res.find(num)==res.end()){
                    res.insert(num);
                //}
            }
        }
    }

    return vector<int>(res.begin(), res.end());
    }
};