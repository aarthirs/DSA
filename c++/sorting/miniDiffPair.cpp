class MinimumDifferencePair {
public:
     int solve(vector<int> input) {
		int minVal =abs(input[0] - input[1]); 
          for(int i=0;i< input.size();i++){
               for(int j=i+1;j<input.size();j++){
                    int sub = abs(input[i] - input[j]);
                    if(sub <=minVal){
                         minVal=sub;
                    }
               }
          }
          return minVal;
     }
};
