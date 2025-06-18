class MaximumProductOfThreeNumbers {
public:
     int solve(vector<int> input) {
          int n = input.size();
		sort(input.begin(),input.end());
          return max(input[n-1]*input[n-2]*input[n-3] , input[0],input[1],input[n-1]);
     }
};

// taking top 3 and   2 smallest (maybe negative) + largest
