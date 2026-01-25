class Solution {
public:
    int dp[101][101];
    int solve(int m , int n , int i, int j){
        if(i==m-1 && j== n-1) return 1;
        if(i>=m || j>=n) return 0; 
        if(dp[i][j] != -1) return dp[i][j];
        int down = solve(m,n,i+1,j); 
        int right=solve(m,n,i,j+1);
        return dp[i][j]=down+right;
    }
    int uniquePaths(int m, int n) {
       memset(dp,-1,sizeof(dp));
     return solve(m,n,0,0);
    }
};

/*
concept : move from top to bottom right corner 
we need to find all possible uni path so using recusion 

base con: we are moving botom , right : when i and j reached m , n i.e end of the grid return 1 , else out of bounds 0 
right: (i,j+1) , bottom=i+1,j
*/
