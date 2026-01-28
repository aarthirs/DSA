class LongestRepeatingSubsequence {
public:
      int lrs(string&text1 , string&text2,vector<vector<int>>& dp){
             int m = text1.size();int n=text2.size(); 
           
            for(int i=1;i<=m;i++){
                  for(int j=1;j<=n;j++){
                        if(text1[i-1]==text2[j-1]&& i!=j){ // only change is here 
                              dp[i][j]=dp[i-1][j-1] +1 ;
                              
                        }
                        else{
                              int op1=dp[i-1][j];
                              int op2=dp[i][j-1];
                              dp[i][j]=max(op1,op2);
                        }
            }
        }
        return dp[m][n] ;
      }
	int solve(string s) {
    		vector<vector<int>> dp(s.size()+1,vector<int>(s.size()+1,0));
            return lrs(s,s,dp);
      }
};

/*
imagine two same s given need to find LCS but their idx shouldn't be same . 
eg: aab 
ans : a , their idx should match (if ab - 02 , ab-12  .. here b idx same so not included)
*/
