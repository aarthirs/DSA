class MultipleOfFive {
public:
     vector<int> solve(int N) {
		vector<int> resultArr;
          for (int i=5;i<=N;i+=5){
               resultArr.push_back(i);
          }
          return resultArr;
     }
};
