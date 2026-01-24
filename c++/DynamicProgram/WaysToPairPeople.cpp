class WaysToPairPeople {
public:
    vector<long long> dp;

    long long countWays(int n) {
        if (n <= 2) return n;

        if (dp[n] != -1)
            return dp[n];

        dp[n] = countWays(n - 1) + (n - 1) * countWays(n - 2); // single + pair 
        return dp[n];
    }

    long long solve(int n) {
        dp.assign(n + 1, -1);
        return countWays(n);
    }
};
