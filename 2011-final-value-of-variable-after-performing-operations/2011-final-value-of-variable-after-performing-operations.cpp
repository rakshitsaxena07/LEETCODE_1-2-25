class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;

        for(auto it:operations){
            for(char indx:it){
                if(indx=='-'){
                    x--;
                    break;
                }
                if(indx=='+'){
                    x++;
                    break;
                }
            }
        }
        return x;
    }
};