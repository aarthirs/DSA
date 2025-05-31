class CountNegative {
public:
     int solve(vector<vector<int>> input) {
		int negativeCount=0;
          for(int i=0;i<input.size();i++){
               for(int j=0;j<input.size();j++){
                    if(input[i][j]<0){
                         negativeCount++;
                    }
               }
          }
          return negativeCount;
     }
};
