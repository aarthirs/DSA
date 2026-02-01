class Solution {
public:
    int minHealth(vector<vector<int>>& dungeon , vector<vector<int>>& dp, int i=0 , int j=0){
         int m=dungeon.size(); 
        int n=dungeon[0].size(); 
        if(i==m || j==n) return 1e9;
        if(i==m-1 && j==n-1) return dungeon[i][j]<=0 ? - dungeon[i][j]+1 :1;
        if(dp[i][j] != 1e9) return dp[i][j]; 

        int down= minHealth(dungeon,dp,i+1,j); 
        int right=minHealth(dungeon,dp,i,j+1);
        int minihealthreq= min(right,down)-dungeon[i][j];
        dp[i][j]=minihealthreq <=0 ? 1 :minihealthreq;
        return dp[i][j];
    }
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int m=dungeon.size(); 
        int n=dungeon[0].size(); 
        vector<vector<int>> dp(m,vector<int>(n,1e9)); 
        return minHealth(dungeon,dp);
    }
};

/*
“How much health do I need BEFORE entering this cell?”
That’s why:
Negative values are converted
Health never allowed ≤ 0
We clamp minimum to 1
*/
