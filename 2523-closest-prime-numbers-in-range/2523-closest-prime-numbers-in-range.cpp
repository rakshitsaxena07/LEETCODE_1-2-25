class Solution {
public:
    bool isPrime(int n){
        if(n<2)
        return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int>tmp;

        for(int i=left;i<=right;i++){
            if(isPrime(i)){
                tmp.push_back(i);
            }
        }
        int mini=INT_MAX;
        for(int i=1;i<tmp.size();i++){
            mini=min(mini,tmp[i]-tmp[i-1]);
        }
       // unordered_map<int,int>ump;

        for(int i=1;i<tmp.size();i++){
           if(mini==(tmp[i]-tmp[i-1])){
            return{tmp[i-1],tmp[i]};
           }
        }

        return {-1,-1};
    }
};