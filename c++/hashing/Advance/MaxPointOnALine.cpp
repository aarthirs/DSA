class MaxPointOnALine {
public:
     int solve(vector<vector<int>> input) {
		int n=input.size(); 
          if(n==1) return 1; 
          int ans=2 ; 

          for(int i=0;i<n-1;i++){
               map<double , int> mp ; 
               for(int j=0;j<n;j++){
                 if(i==j) continue ; 
                    int x1= input[i][0];
                    int y1=input[i][1]; 
                    int x2=input[j][0];
                    int y2=input[j][1];
                 double tangent = atan2((y2-y1),(x2-x1)); 
                 mp[tangent]++;
                 ans=max(ans,mp[tangent]+1);
               }
          }
          return ans ;
     }
};

/*
The function atan2(y, x) gives the angle (in radians) between the positive X-axis and the point (x, y).
If two different points give the same angle, then they’re on the same straight line with respect to (x1, y1).

Thus, you can group points by angle — similar to grouping by slope.
*/
