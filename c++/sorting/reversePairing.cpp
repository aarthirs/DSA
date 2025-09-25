class ReversePairs {
public:
     int solve(vector<int> input) {
          int count=0 ;
		for(int i=0 ;i<input.size();i++){
               for(int j=i+1;j<input.size();j++){
                    if((i<j)&&(input[i]> 2*input[j])){
                         count++ ;
                    }
               }
          }
      return count;
     }
};
