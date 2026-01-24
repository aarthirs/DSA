class MiceToHole {
public:
     int solve(vector<int> input1,vector<int> input2) {
		sort(input1.begin(),input1.end()); 
          sort(input2.begin(),input2.end()); 

          int maxdiff=0;
          for(int i=0;i<input1.size();i++){
               int currentdiff = abs(input1[i]-input2[i]);
               if(currentdiff>maxdiff){
                    maxdiff=currentdiff;
               }
          }
          return maxdiff;
     }
};

/*
need to find the maxi time taken to reach the hole 
*/
