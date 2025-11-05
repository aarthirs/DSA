class FindPair {
public:
     vector<vector<int>> solve(vector<int> input) {
		int n=input.size(); 
          vector<vector<int>> ans; 
          unordered_set<int> st;
          for(int i=0;i<n;i++){
               st.insert(input[i]);
          }

          for(int i=0;i<n;i++){
               for(int j=i+1;j<n;j++){
                    if(st.find(input[i]+input[j])!=st.end()){
                         ans.push_back({input[i],input[j]});
                    }
               }
          }
          return ans;
     }
};
