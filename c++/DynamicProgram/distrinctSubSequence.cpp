class Solution {
public:
    int numDistinct(string s, string t) {
        int m = s.size(), n = t.size();
        vector<vector<double>> dp(m+1, vector<double>(n+1, 0));

        // base cases
        for (int i = 0; i <= m; i++) 
            dp[i][0] = 1;

        for (int j = 1; j <= n; j++)
            dp[0][j] = 0;

        // DP transition
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (s[i-1] == t[j-1]) {
                    dp[i][j] = dp[i-1][j-1] + dp[i-1][j]; // edit + delete
                } else {
                    dp[i][j] = dp[i-1][j]; // not match delete 
                }
            }
        }
        return int(dp[m][n]);
    }
};

/*
qn asking from t need to form s :
edit or delete 

1.base condition: 
how many way if t="" to from s : to make every char in s delete 
so from 0 to m : 1 

2.dp[0][0] already handle start from 1 to j : dp[0][j] 
Can I form a non-empty string using no characters? so 0 
why here we are not inserting editing and delete so 0 -- impossible condition 
*/
