class Subsets {
public:
     vector<vector<int>> solve(vector<int> input) {
          vector<vector<int>> subint ={{}}; 
		for(int num:input){
              int n=subint.size();
              for(int i=0; i<n;i++){
                    subint.push_back(subint[i]);
                    subint.back().push_back(num);
              }
          }
          return subint;
     }
};
