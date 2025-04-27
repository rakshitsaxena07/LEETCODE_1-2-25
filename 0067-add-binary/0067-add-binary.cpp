class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1;
        int j=b.length()-1;
        int carry=0;
        int sum;
        string res;

        while(i>=0 or j>=0 or carry){
            sum=carry;
            if(i>=0){
                sum+=a[i--]-'0';

            }

            if(j>=0){
                sum+=b[j--]-'0';
            }
            res=char(sum%2 + '0') + res;     
            carry=sum/2;
        }

        return res;
    }
};