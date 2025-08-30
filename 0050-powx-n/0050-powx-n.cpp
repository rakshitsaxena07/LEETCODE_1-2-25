class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1.0;
        if(x==1.0) return 1.0;
        if(x==-1.0) return (n%2==0)?1.0:-1.0;

        long long N=n;
        if(N<0){
            x=1/x;
            N=abs(N);
        }

        double res=1.0,currentProd=x;

        while(N>0){
            if(N%2==1){
                res*=currentProd;
            }

            currentProd*=currentProd;
            N/=2;
        }



        return res;
    }
};