class DifferenceofSum {
public:
    int digitSum(int n) {
        int digSum = 0;
        while (n > 0) {
            digSum += n % 10;
            n /= 10;
        }
        return digSum;
    }

    int solve(vector<int> input) {
        int digit = 0, sum = 0;
        for (int i : input) {
            sum += i;
            digit += digitSum(i);
        }
        return abs(sum - digit);
    }
};
