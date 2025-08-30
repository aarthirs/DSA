class Permutation {
public:
      vector<vector<int>> perm(vector<int> input , vector<int> ans){
          if(input.size() == 0) return {ans};

          vector<vector<int>> result ; 
          sort(input.begin(),input.end());
          for(int i=0 ; i<input.size();i++){
               if(i>0 && input[i]==input[i-1]) continue; //same as permutation here we sort and skipping the duplications
               int selectedInt = input[i]; 

               vector<int> remainingInput = input; 
               remainingInput.erase(remainingInput.begin()+i); 

               vector<int> newAns = ans;
               newAns.push_back(selectedInt); 

                vector<vector<int>> subpermutation = perm(remainingInput,newAns);
               result.insert(result.end(),subpermutation.begin(),subpermutation.end());
          }
          return result;
     }
     vector<vector<int>> solve(vector<int> input) {
		vector<int> ans; 
          return perm(input, ans);
     }
};
