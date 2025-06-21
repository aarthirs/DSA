class DivideArray {
public:
     bool check(vector<int> input) {
		unordered_map<int , int> m; 
          int n= input.size();
          for(int i=0 ; i<input.size();i++){
               m[input[i]]++; 
          } 
          int pair=0;
          for (auto i: m){
               pair += i.second/2 ;
          }
          return pair == n/2;
     }
};
