class Permutation {
public:
     vector<int> build(vector<int> input) {
		int pivot=-1; //2nd decreasing number ; i.e 2 index number
          int n=input.size(); 
          int j;
          for(int i=n-2;i>=0;i--){
               if(input[i]<input[i+1]){ //2<3 
                    pivot=i; 
                    break;
               }
          }

          if(pivot<0){
               reverse(input.begin(),input.end());
          } 
          else{
               for(int i=n-1;i>pivot;i--){
                    if(input[i]>input[pivot]){
                              j=i;
                              break;
                    }
               }
               swap(input[pivot],input[j]);
               reverse(input.begin()+pivot+1 , input.end());
          }
          return input;
     }
};

/*
Find the largest index i such that nums[i] < nums[i + 1] [first decreasing number from first]

    If not found → reverse whole array

Find largest index j > i such that nums[j] > nums[i]

Swap nums[i] and nums[j]

Reverse the subarray from i+1 to end
*/ 
