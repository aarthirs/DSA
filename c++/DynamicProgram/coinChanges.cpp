class Solution {
public:

    int solve(vector<int>&coins, int amount, vector<vector<int>>&dp, int idx){
        if(amount==0) return 1; 
        if(idx==coins.size()|| amount<0) return 0;
        if (dp[idx][amount] != -1)
            return dp[idx][amount];

        // not pick current coin
        int notPick = solve(coins,amount,dp,idx+1);

        // pick current coin (can reuse same coin)
        int pick = solve(coins, amount - coins[idx], dp,idx);

        return dp[idx][amount] = pick + notPick;

    }
    int change(int amount,vector<int>& coins) {
       vector<vector<int>> dp(coins.size(),vector<int>(amount+1,-1)); 
       return solve(coins,amount,dp ,0);
    }
};
