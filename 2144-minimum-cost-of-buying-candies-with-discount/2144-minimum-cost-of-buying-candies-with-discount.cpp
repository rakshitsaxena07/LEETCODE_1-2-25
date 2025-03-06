class Solution {
public:
    int minimumCost(vector<int>& cost) {
    int n=cost.size();
    if(n==1)
    return cost[0];
    if(n==2){
    return cost[0]+cost[1];        
    }
    sort(cost.begin(),cost.end());
    if(n==3)
    return cost[1]+cost[2];
int c=0;
    for(int i=n-1;i>=0;i-=3){
        c += cost[i];
    if (i - 1 >= 0)  // Ensure no out-of-bounds access
        c += cost[i - 1];
}
    return c;
    }
};