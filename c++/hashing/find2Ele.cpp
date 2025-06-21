class FindTwoElement {
public:
     vector<int> solve(vector<int> input) {
          vector<int> arr;
          unordered_map<int,int> m;
		for (int i=0;i<input.size();i++){
               m[input[i]]++; 
               if(m[input[i]] == 2){
                    arr.push_back(input[i]);
                   
               }
          }
         
          for(int i=1;i<=input.size();i++){
               if(m.find(i) == m.end()){
                    arr.push_back(i);
               }
          }
          return arr;

         
     }
};
