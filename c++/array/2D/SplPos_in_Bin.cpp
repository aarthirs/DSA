class NumSpecial {
public:
     int solve(vector<vector<int>> input) {
		int row=input.size(); 
          int col=input[0].size(); 
          int count=0;
          for(int i=0;i<row;i++){
               int one=0 , zero=0 ; 
               for(int j=0;j<col;j++){
                    if((input[i][j]==1) && (input[j][i] == 1)) one++;
                    else zero++;
               }
               if((one==1) && (zero==row-1) && (zero ==col-1)){
                    count++;
               }
          }
          return count;
     }
};
