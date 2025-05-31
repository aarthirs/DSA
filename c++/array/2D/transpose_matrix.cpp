class Transpose {
public:
     vector<vector<int>> solve(vector<vector<int>> input) {
          vector<vector<int>> resultArr;
          vector<int> row;
		for(int i=0;i<input.size();i++){
               row.clear();
               for(int j=0;j<input[0].size();j++){
                 int num=input[j][i]; 
                 row.push_back(num);  
               }
               resultArr.push_back(row);

          }
          return resultArr;
     }
};
