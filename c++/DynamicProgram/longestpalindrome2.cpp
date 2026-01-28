class Solution {
public:
     int palSub(string& text1,string&text2,vector<vector<int>>& dp){
              int m = text1.size();int n=text2.size(); 
           
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
        return dp[m][n] ;
    }
    int minInsertions(string s) {
         string revstr=s;
            reverse(s.begin(),s.end());
    		vector<vector<int>> dp(s.size()+1,vector<int>(revstr.size()+1));
            return s.size()- palSub(s,revstr,dp);
    }
};

/*
similar to longest palidrome : here we found subseq form pal 
then  now we need to find remaining char to change so subtract it with palsub()
*/
