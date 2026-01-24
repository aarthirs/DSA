class DistributeCandies {
public:
     int solve(vector<int> input) {
		int n= input.size(); 
          // unordered_map<int ,int> mp;
          // for(int i=0;i<n;i++){
          //      for(int j=i+1;j<n;j++){
          //           if(mp[input[i]]!=input[j]){
          //                mp[input[i]]=input[j];
          //           }
          //      }
          // }
          // return mp.size();

          //method2 :

     unordered_set<int> st(input.begin(), input.end());
        return min((int)st.size(), n / 2);
     }
};
