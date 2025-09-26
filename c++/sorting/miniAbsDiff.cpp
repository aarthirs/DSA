class MinimumAbsDifference {
public:
     vector<vector<int>> solve(vector<int> input) {
         sort(input.begin(), input.end());
        vector<vector<int>> resArr;

        int minDist = INT_MAX;

        // only need to check adjacent elements after sorting
        for (int i = 1; i < input.size(); i++) {
            int dist = input[i] - input[i - 1];

            if (dist < minDist) {
                minDist = dist;
                resArr.clear(); // clear all previous results
                resArr.push_back({input[i - 1], input[i]});
            }
            else if (dist == minDist) {
                resArr.push_back({input[i - 1], input[i]});
            }
        }
        return resArr;
     }
};
