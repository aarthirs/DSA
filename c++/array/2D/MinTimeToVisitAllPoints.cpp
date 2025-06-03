class MinTimeToVisitAllPoints {
public:
     int solve(vector<vector<int>> input) {
     //time = max(abs(x2 - x1), abs(y2 - y1))
	   int totTime=0;
        for(int i=0;i<input.size()-1;i++){
          int dx=abs(input[i+1][0] - input[i][0]);
          int dy=abs(input[i+1][1] - input[i][1]);
          totTime += max(dx,dy);
        }
        return totTime;
     }
};
