class LeftRightSumDifferences {
public:
     vector<int> solve(vector<int> input) {
          vector<int> result;
         
          for(int i=0;i<=input.size()-1;i++){
             auto idx=0; 
             auto index= find(input.begin(),input.end(),input[i]);
             if(index !=input.end()){
                 idx= index - input.begin();  
             }
             cout<<idx;
             if(idx==0){
               int rightSum =0 ;
               for(int i=1;i<=input.size()-1;i++){
                    rightSum+= input[i];
               }
               result.push_back(rightSum);
             }
             else{
               int rightSum=0;
               int leftSum=0;
               int totalSum=0;
               for(int i=idx+1;i<=input.size()-1;i++){
                    rightSum+=input[i];
               }
               for(int i=idx-1;i>=0;i--){
                    leftSum+=input[i];
               }
               totalSum= abs(leftSum-rightSum);
               result.push_back(totalSum);
             }

          }

          return result;
		
     }
};
