class Solution {
public:
    int maximum69Number (int num) {
        stack<int>st;
        while(num>0){
            st.push(num%10);
            num/=10;
        }
        bool flag=1;
        int res=0;
        while(!st.empty()){
            int tmp=st.top();
            st.pop();
            if(tmp!=9 and flag){
                tmp=9;
                flag=0;
            }
                res=(res*10) +tmp;

        }

        return res;
    }
};