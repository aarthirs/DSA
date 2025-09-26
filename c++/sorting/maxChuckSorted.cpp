class MaxChunksSorted {
public:
     int solve(vector<int> input) {
		int n=input.size();
          int maxVal=0 , chuck=0; 

          for(int i =0 ;i<n;i++){
               int maxVal=max(maxVal,input[i]);
               if(maxVal==i){
                    chuck++;
               }
          }
          return chuck;
     }
};

//maxval == current idx
