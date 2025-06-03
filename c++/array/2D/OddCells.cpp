class OddCells {
public:
     int solve(int n,int m,vector<vector<int>> indices) {
		vector<int> row(n,0);
          vector<int> col(m,0);
          //now increment the row and col
          for(auto& idx:indices){
               row[idx[0]]++;
               col[idx[1]]++;
          }
          
          //count ij sum
          int count=0;
          for(int i=0;i<n;i++){
               for(int j=0;j<m;j++){
                    if((row[i]+col[j])%2 ==1){
                         count++;
                    }
               }
          }
          return count;
     }
};
