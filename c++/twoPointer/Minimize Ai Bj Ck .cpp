class Minimize {
public:
     int solve(vector<int> input1,vector<int> input2, vector<int> input3) {
		int i=input1.size()-1 , j= input2.size()-1 , k=input3.size()-1 ; 
          int mini_diff , current_diff , max_val ; 
           mini_diff= abs(max(input1[i] , max(input2[j], input3[k])) - min(input1[i] , min(input2[j], input3[k]))) ; 

          while(i !=-1 && j != -1 && k != -1){
               current_diff =abs(max(input1[i] , max(input2[j], input3[k])) - min(input1[i] , min(input2[j], input3[k]))) ; 
               if(current_diff <mini_diff){
                    mini_diff=current_diff;
               }

               max_val=max(input1[i],max(input2[j],input3[k]));
               if(input1[i]==max_val){
                    i-=1 ;
               }
               if(input2[j]==max_val){
                    j-=1 ;
               }
               if(input3[k]==max_val){
                    k-=1 ;
               }
          }
          return mini_diff;
     }
};
