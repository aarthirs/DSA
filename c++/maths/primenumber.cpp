class Prime {
public:
     vector<int> solve(int N) {
          vector<int> arrResult;
		while (N%2 ==0) {
  arrResult.push_back(2);
               N/=2;
          }
             
          for(int i=3; i<= sqrt(N) ;i++){
              while (N%i ==0){
                arrResult.push_back(i);
                N/=i;
              }
          }  
          if (N>2){
               arrResult.push_back(N);
          }   

          return arrResult;
     }
};
