class SumOfUnique {
public:
     int solve(vector<int> input) {
		unordered_map<int,int> m;
          int sum=0;
          for(int i=0;i<input.size();i++){
               m[input[i]]++ ;
          }
          for(int i:input){
               if(m[i] == 1){
                    sum+=i;
               }
          }
          return sum;
     }
};
