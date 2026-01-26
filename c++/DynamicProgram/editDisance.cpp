class Solution {
public:
      vector<vector<int>> dp;
      int dist (string word1,string word2){
          int m=word1.size(); int n=word2.size();
        for(int i=1;i<=word1.size();i++){
            dp[i][0]= i;
        }
        for(int j=1;j<=word2.size();j++){
            dp[0][j]= j;
        }

        for(int i=1;i<=word1.size();i++){
            for(int j=1;j<=word2.size();j++){
                if(word1[i-1]==word2[j-1]){
                    dp[i][j]=dp[i-1][j-1];
                }
                else{
                    dp[i][j]=min(dp[i][j-1], min(dp[i-1][j] , dp[i-1][j-1]))+1;
                }
            }
        }
        return dp[m][n];
      }
    int minDistance(string word1, string word2) {
      
       dp=vector<vector<int>> (word1.size()+1,vector<int>(word2.size()+1,0));
       return dist(word1,word2);
        
    }
};
/*
like coin change prob dp inialize and update it 
perform all the insert, delete, remove operations 
if insert the i idx remains same , j-1 (eg: ca , cba)
if delete i-1,j (eg: efgg , egg)
if replace both i-1 , j-1
*/
