class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
            vector<int>res;
            int indx=0;
        for(auto it:words){
            for(char i:it){
                if(i==x){
                    res.push_back(indx);
                    break;
                }
              
            }
            indx++;
        }

        return res;
        
    }
};