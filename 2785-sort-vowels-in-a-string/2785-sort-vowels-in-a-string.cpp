class Solution {
public:
    string sortVowels(string s) {
        vector<char>st;
        for(auto it: s){
            if(it=='A' ||it=='E' || it=='I' || it=='O' || it=='U' || it=='a' || it=='e' || it=='i' || it=='o' || it=='u'){
                st.push_back(it);
            }
        }
            sort(st.begin(),st.end());

            for(auto it:st){
                cout<<it<<endl;
            }
            int j=0;
        for (int i = 0; i < s.length(); ++i) {
    if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
        s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
        s[i] = st[j++];
    }
}
return s;
    }
};