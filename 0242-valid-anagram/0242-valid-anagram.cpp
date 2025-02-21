class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        return 0;
        unordered_map<int,int>ump;

        for(int i=0;i<t.length();i++){
            ump[t[i]]++;
        }
        for(int i=0;i<t.length();i++){
            if(ump.find(s[i])!=ump.end()){
                if(ump[s[i]]>0)
                ump[s[i]]--;

                else{
                    return 0;
                }
            }
            else{return 0;}
        }
        return 1;
    }
};