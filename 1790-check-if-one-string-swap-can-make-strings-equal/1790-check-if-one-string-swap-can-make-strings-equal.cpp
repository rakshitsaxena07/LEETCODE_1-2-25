class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.length()!= s2.length())
        return 0;

        unordered_map<char,int>ump;

        for(auto it: s1){
            ump[it]++;
        }

        for(int i=0;i<s2.length();i++){
            if(ump.find(s2[i])!=ump.end() and ump[s2[i]]!=0){
                ump[s2[i]]--;
            }
            else
            return 0;
        }

        int c=0;
        for(int i=0;i<s2.length();i++){
            if(s1[i]!=s2[i]){
                c++;
            }
        }

        if(c>2)
        return 0;



        return 1;
    }
};