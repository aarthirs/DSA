class Sort {
public:
     vector<int> solve(vector<int> input) {
		unordered_map<int, int> m;
          vector<int> arr;
          for(int i=0;i<input.size();i++){
               m[input[i]]++; 
          }
          sort(begin(input),end(input),[&](int a,int b){
               return m[a]==m[b]? a>b : m[a]<m[b];
          } );
          return input;
     }
};

/*For two elements a and b, compare:

    If m[a] == m[b] → pick the larger value first (i.e., a > b)

    Else → pick the one with smaller frequency (m[a] < m[b]) 
*/
