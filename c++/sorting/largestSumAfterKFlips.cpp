class LargestSumAfterKNegations {
public:
     int solve(vector<int> input,int k) {
          sort(input.begin(),input.end()); 

          for(int i=0;i<input.size() && k>0 ; i++){
               if(input[i]<0){
                    input[i]= -input[i];
                    k--;
               }
         
          }

          //if k is still in odd we need to flip bc if k is even no effort in flip 

          if(k%2 ==1){
               int minVal = *min_element(input.begin(), input.end()); 
               for(int i=0 ; i<input.size();i++){
                    if(input[i] == minVal){
                         input[i] = - input[i];
                         break;
                    }
               }
          }

          return accumulate(input.begin(),input.end(),0);
     }
};
