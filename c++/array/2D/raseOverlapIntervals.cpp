class EraseOverlapIntervals {
public:
     int solve(vector<vector<int>> input) {
		sort(input.begin(), input.end(),[](const vector<int>& a, const vector<int>&  b){
               return a[1]<b[1];
          });
          int prevEnd=input[0][1];
          int removeElem=0;
          for(int i=1;i<input.size();i++){
               int start=input[i][0];
               if(prevEnd>start){
                      removeElem++;
               }
               else{
                    prevEnd=input[i][1];
               }
          }
          return removeElem;
     }
};
