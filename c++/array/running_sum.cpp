class RunningSum {
public:
     vector<int> sum(vector<int> input) {
          int n=input.size();
          vector<int> result;
          for(int i=0;i<n;i++){
             int sum=0;
             for (int j=0;j<=i;j++){
                 sum += input[j];
          }
          result.push_back(sum);
          }
          return result;
     }
};
