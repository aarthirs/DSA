class FlipandInvert {
public:
     vector<vector<int>> solve(vector<vector<int>> input) {
          vector<vector<int>> reversedArr=input;
		for (auto& row : reversedArr) {
            reverse(row.begin(), row.end()); 
          }

          for(int i=0;i<input.size();i++){
               for(int j=0;j<input.size();j++){
                    if (reversedArr[i][j]== 1){
                         reversedArr[i][j]=0 ;
                    }
                    else{
                         reversedArr[i][j]=1;
                    }
               }
          }
          return reversedArr;
     }
};
