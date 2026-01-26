class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();int n=text2.size(); 
        vector<vector<int>> dp(m+1,vector<int>(n+1,0)); 


        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(text1[i-1]==text2[j-1]){
                    dp[i][j]=dp[i-1][j-1] +1 ;
                }
                else{
                    int op1=dp[i-1][j];
                    int op2=dp[i][j-1];
                    dp[i][j]=max(op1,op2);
                }
            }
        }
        return dp[m][n];
    }
};

/*
similar to edit distance: difference is 
base condition of dp 0 
only deleting either of the strings not fix to text 2 
*/
