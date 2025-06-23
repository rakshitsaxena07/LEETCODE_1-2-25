class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int starting=-1;
        int sum1=0;int sum2=0;
        for(int i=0;i<gas.size();i++){
            sum1 +=gas[i];
            sum2 +=cost[i];

        }

        if(sum1<sum2)
        return -1;

        int total=0;
        int indx=0;
        for(int i=0;i<gas.size();i++){
           total+=(gas[i]-cost[i]);

           if(total<0){
            total=0;
            indx=i+1;
           }

            }


        
        
        return indx;
    }
};