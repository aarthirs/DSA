class Generate {
public:
     void recursion(int i , int N, vector<int>& arr){
          if(i>N) return; 
          arr.push_back(i);
          recursion(i+1,N,arr);
     }
     vector<int> solve(int N) {
          int i=1; 
          vector<int> arr;
		recursion(i,N,arr);
          return arr;
     }
};
