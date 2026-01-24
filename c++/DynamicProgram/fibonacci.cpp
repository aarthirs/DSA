class Solution {
public:
    int fib(int n) {
        // memoization 
        // vector<int> dp(n+1,-1); 
        // if(n<=1) return n; 
        // if(dp[n]!=-1) return dp[n]; 
        // dp[n]=fib(n-1)+fib(n-2);
        // return dp[n];


        // tabulation 
        // vector<int> dp(n+1);
        // if(n<=1) return n;
        // dp[0]=0; dp[1]=1 ; 
        // for(int i=2;i<=n;i++){
        //     dp[i]=dp[i-1]+dp[i-2]; 
        // }
        // return dp[n];


        // space optimal 
        int x=0 , y=1 , curr; 
        if(n<=1) return n;
        for(int i=2;i<=n;i++){
            curr=x+y; 
            x=y; 
            y=curr;
        }
        return curr;
    }
};
