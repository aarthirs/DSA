class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,amount+1); 
        dp[0]=0; 
        for(int coin:coins){
            for(int a=coin;a<=amount;a++){
                dp[a]=min(dp[a], 1+dp[a-coin]); //min(12,1) dp[1]=1
            }
        }
        
        return dp[amount] > amount ? -1 : dp[amount];
    }
};

//Min coins → take min + 1
/*
1.initial dp 0:0,1:12,2:12,.... we updating the dp values in each iterations
2.inner loops goes like : 1 to 11 , 2to 11 , 5 to 11 

Outer loop → coins (unlimited usage)
Inner loop → increasing amount
1 + dp[a - coin] = use one coin + best for remaining
*/
