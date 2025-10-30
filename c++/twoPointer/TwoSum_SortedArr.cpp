class TwoSumSorted {
public:
     vector<int> solve(vector<int> input,int target) {
		int left=0 , right=input.size()-1 ; 

          while(left <right){
               if(input[left]+input[right]==target){
                    return {left+1 , right+1};
               }
               else if(input[left]+input[right] < target) left++ ; 
               else right-- ; 
          }
          return {};
     }
};
