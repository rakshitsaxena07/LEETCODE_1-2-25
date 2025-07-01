class Solution {
public:
vector<string> findWords(vector<string>& words) {
        vector<string> res;
        string st1 = "qwertyuiop";
        string st2 = "asdfghjkl";
        string st3 = "zxcvbnm";

        unordered_set<char> ust1(st1.begin(), st1.end());
        unordered_set<char> ust2(st2.begin(), st2.end());
        unordered_set<char> ust3(st3.begin(), st3.end());

        for (auto word : words) {
            string temp = word;
            // convert to lowercase for uniform comparison
            transform(temp.begin(), temp.end(), temp.begin(), ::tolower);

            unordered_set<char>* currentSet = nullptr;
            if (ust1.count(temp[0])) currentSet = &ust1;
            else if (ust2.count(temp[0])) currentSet = &ust2;
            else if (ust3.count(temp[0])) currentSet = &ust3;

            bool valid = true;
            for (char ch : temp) {
                if (!currentSet->count(ch)) {
                    valid = false;
                    break;
                }
            }

            if (valid) res.push_back(word);  // push original word
        }

        return res;
    }
};