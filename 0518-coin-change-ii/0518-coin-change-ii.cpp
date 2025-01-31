class Solution {
public:
    int solve(int amount, vector<int> coins,int indx,vector<vector<int>>&dp){
        if(amount==0){
            return 1;
        }
        if(indx<0 or amount<0){
            return 0;
        }
        if(dp[indx][amount]!=-1){
            return dp[indx][amount];
        }

        int notTake=solve(amount,coins,indx-1,dp);
        int taken=(coins[indx]<=amount)?solve(amount-coins[indx],coins,indx,dp):0;

        return dp[indx][amount]=taken+notTake;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return solve(amount,coins,n-1,dp);
        
    }
};