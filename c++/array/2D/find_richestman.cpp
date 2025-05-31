class RichestCustomerWealth {
public:
     int solve(vector<vector<int>> input) {
          int highestNum=0;
		for (auto& row : input){
              int sum= accumulate(row.begin(),row.end(),0);
              if(highestNum<sum){
               highestNum=sum;
              }
          }
          return highestNum;
     }
};
