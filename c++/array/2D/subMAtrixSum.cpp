class SubMatrixSum {
public:
     int solve(vector<vector<int>> input) {
		int sum=0; 
          int n=input.size();
           
          for(int i=0;i<n;i++){
               for(int j=0;j<n;j++){
                    int topleft=(i+1)*(j+1);
                    int bottomright =(n-i)*(n-j);
                    sum+=(input[i][j]*(topleft)*bottomright);
               }
          }
          return sum;
     }
};
