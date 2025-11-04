class IsValidSudoku {
public:
     bool solve(vector<vector<int>> input) {
		vector<set<int>> row(9),col(9),grid(9);

          for(int i=0;i<9;i++){
               for(int j=0;j<9;j++){

                    if(input[i][j]==0) continue;
                    int currVal =input[i][j];

                    if(row[i].count(currVal) ||col[j].count(currVal)||grid[(i/3)*3 +(j/3)].count(currVal)){
                         return false ; //if any one more than 1 then element is duplicated
                    }

                    row[i].insert(currVal);
                    col[j].insert(currVal);
                    grid[(i/3)*3 +(j/3)].insert(currVal);
               }
          }
          return true;
     }
};
