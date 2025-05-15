class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        stack<pair<string,int>>st;
        st.push(make_pair(words[0],groups[0]));
        for(int i=1;i<words.size();i++){
            if(!st.empty()){
              pair<string,int> topElement = st.top();
              if(topElement.second !=groups[i]){
                st.push(make_pair(words[i],groups[i]));
              }
              continue;
            }
        }

        vector<string>res;
        while(!st.empty()){
            pair<string,int> topEle=st.top();
            st.pop();
            res.insert(res.begin(), topEle.first);
        }


        return res;

    }
};