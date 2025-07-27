class UniquePaths {
public:
	int count(int m,int n) {
    		vector<vector <int>> path(m,vector<int> (n,1)); 
            for(int i=1 ; i<m ; i++){
                  for(int j=1 ; j<n ; j++){
                        path[i][j] = path[i-1][j] + path[i][j-1];
                  }
            }
            return path[m-1][n-1];
      }
};

/*
Initial DP:

[1, 1]  // Row 0
[1, 1]  // Row 1
[1, 1]  // Row 2

Now apply the formula starting from (1,1):
i = 1, j = 1:

dp[1][1] = dp[0][1] + dp[1][0] = 1 + 1 = 2

DP becomes:

[1, 1]
[1, 2]
[1, 1]

i = 2, j = 1:

dp[2][1] = dp[1][1] + dp[2][0] = 2 + 1 = 3

Final DP:

[1, 1]
[1, 2]
[1, 3]
*/
