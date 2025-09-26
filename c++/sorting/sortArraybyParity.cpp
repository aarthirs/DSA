class SortArrayByParity {
public:
    vector<int> sortByParity(vector<int> input) {
        sort(input.begin(), input.end(), [](int a, int b) {
            return (a % 2) < (b % 2);  // even (0) comes before odd (1)
        });
        return input;
    }
};
