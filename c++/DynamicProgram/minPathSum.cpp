class Solution {
public:
    int func(int i , int j ,vector<vector<int>>&grid , vector<vector<int>>&dp){
        int m = grid.size()-1;
        int n=grid[0].size()-1; 
        if (i < 0 || j < 0) return INT_MAX;

        if(i==0 && j == 0 ) return grid[0][0]; 

        if(dp[i][j]!=-1) return dp[i][j]; 
        int up = func(i - 1, j, grid, dp);
        int left = func(i, j - 1, grid, dp);

        return dp[i][j] = grid[i][j] + min(up, left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n=grid[0].size(); 
        vector<vector<int>> dp(m,vector<int>(n,-1)); 
        return func(m-1,n-1,grid,dp);
    }
};

/*
we can also able to this in right and bottom 
that time changes are:
base con: i>=row.size || j>= col.size() , i== row.size && j== col.size()
right: i,j+1 
bottom:i+1,j
*/
