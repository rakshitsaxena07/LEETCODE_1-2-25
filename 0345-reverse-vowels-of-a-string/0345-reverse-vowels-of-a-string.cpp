class Solution {
public:
    string reverseVowels(string s) {
      string tmp;
      int j=0;
      for(auto it: s){
        if(it=='A'|| it=='E'|| it=='I'|| it=='O'|| it=='U' || it=='a'|| it=='e'|| it=='i'||  it=='o'|| it=='u' ){
            tmp+=it;
        }
      }
reverse(tmp.begin(),tmp.end());

      for(int i=0;i<s.length();i++){
       if(s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U'|| s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u' ){
        s[i]=tmp[j++];
       }
      }  

      return s;
    }
};