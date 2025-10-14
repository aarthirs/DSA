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

/*
Here we using the concept of sliding window :

window : contiguous block of the array that we’re focusing on at the moment. 
for creating these block we'll ocunt the good ;
from the good slide -- count the bad >k 
Array:  [2, 1, 5, 6, 3]
k = 3
good = 3

Start →  [2, 1, 5]  6   3   → bad = 1
Slide →   2 [1, 5, 6] 3   → bad = 2
Slide →   2 1 [5, 6, 3]   → bad = 2
*/
