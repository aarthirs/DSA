class kDifferentPairsInArray {
public:
     int solve(vector<int> input,int k) {
		map<int , int> freq ; 
          for(auto it:input){
               freq[it]++;
          }
          int cnt =0 ; 
          for(auto it : freq){
               if(k==0){
                    if(it.second >1){
                         cnt++;
                    }
               }
               else if(freq.find(it.first + k)!= freq.end()){
                    cnt++;
               }
          }
          return cnt;
     }
};

/*
1 if : same number sub gives 0 
2nd if : 3+2 =5 --> 5-3=2 where 2 is the target
*/
