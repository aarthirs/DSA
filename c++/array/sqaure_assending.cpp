class SortedSquares {
public:
     vector<int> solve(vector<int> input) {
		vector<int> sortedArr;
          for (int i=0;i<input.size();i++){
               int square=input[i]*input[i];
               sortedArr.push_back(square);
          } 

          sort(sortedArr.begin(),sortedArr.end()); 
          return sortedArr;
     }
};
