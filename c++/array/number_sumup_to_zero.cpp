class SumZero {
public:
     vector<int> solve(int N) {
		vector<int> result;
          for(int i=0;i<N/2;i++){
               result.push_back(i);
               result.push_back(-i);
          }
          if(N%2 !=0){
               result.push_back(0);
          }
          return result;
     }
};
