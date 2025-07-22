class FourDivisors {
public:
    int solve(vector<int> input) {
        int totalSum = 0;

        for (int i : input) {
            vector<int> sumArr;
            int count = 0;

            for (int j = 1; j <= i; j++) {
                if (i % j == 0) {
                    count++;
                    sumArr.push_back(j);
                }
            }

            if (count == 4) {
                totalSum += accumulate(sumArr.begin(), sumArr.end(), 0);
            }
        }

        return totalSum;
    }
};
