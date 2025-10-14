class MinimumSwaps {
public:
    int solve(vector<int> input, int k) {
        int n = input.size();
        int good = 0; 

        for (int x : input) {
            if (x <= k) good++;
        }

        int bad = 0;
        for (int i = 0; i < good; i++) {
            if (input[i] > k) bad++;
        }

        int ans = bad;
        for (int i = 0, j = good; j < n; i++, j++) {
            if (input[i] > k) bad--;
            if (input[j] > k) bad++;
            ans = min(ans, bad);
        }

        return ans;
    }
};
