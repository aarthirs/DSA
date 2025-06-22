class UnequalTriplets {
public:
     int solve(vector<int> input) {
		int triplet=0; 
          int n=input.size();
          for(int i=0;i<n;i++){
               for(int j=i+1;j<n;j++){
                    for(int k=j+1;k<n;k++){
                         if((i<j<k) && ((input[i]!= input[j]) && (input[k]!=input[i]) && (input[j]!=input[k]))){
                              triplet++ ; 
                         }
                    }
               }
          }
          return triplet;
     }
};
