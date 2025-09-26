class KClosest {
public:
    vector<vector<int>> solve(vector<vector<int>> input, int k) {
        // Sort input points based on their squared distance from origin
        sort(input.begin(), input.end(), [](const vector<int>& a, const vector<int>& b){
            return (a[0]*a[0] + a[1]*a[1]) < (b[0]*b[0] + b[1]*b[1]);
        });

        // Take first k elements
        vector<vector<int>> resArr(input.begin(), input.begin() + k);
        return resArr;
    }
};
