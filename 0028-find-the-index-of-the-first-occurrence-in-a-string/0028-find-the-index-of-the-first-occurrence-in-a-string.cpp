class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.find(needle)== string :: npos){
            return -1;
        }

         for(int i=0;i<haystack.length();i++){
            int c=0;
        for(int j=0;j<needle.length();j++){
            if(haystack[i] ==needle[j]){
                int tmp=i;
      while(haystack[i] ==needle[j] and i<haystack.length() and j<needle.length()){
                c++;
                
                i++;
                j++;

               }
               if(c==needle.length()){
                    return tmp;
                }
            }
        }
        }
        return -1;
    }
};