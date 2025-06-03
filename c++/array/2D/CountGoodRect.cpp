class CountGoodRectangles {
public:
     int solve(vector<vector<int>> input) {
		int maxLen=0 ;
          int count=0;
          for(auto& rect: input){
               int minSize=min(rect[0],rect[1]);
               if(minSize>maxLen){
                    maxLen=minSize;
                    count=1;
               }
               else if(minSize==maxLen){
                    count++;
               }
          }
          return count;
     }
};
