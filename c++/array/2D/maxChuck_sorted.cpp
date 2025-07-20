class MaxChunksSorted {
public:
     int solve(vector<int> input) {
		vector<int> sortedArr=input; 
          sort(sortedArr.begin(),sortedArr.end());
          unordered_map<int, int> countA, countB;
          int chunks = 0;

          for (int i = 0; i < input.size(); i++) {
               countA[input[i]]++;
               countB[sortedArr[i]]++;

               if (countA == countB) {
                    chunks++;
               }
          }

          return chunks;
     }
};

//the maximum value on the left (including current index) is equal to 
// the maximum value in the sorted version at that same index.

// Why?

//     Because that means the current chunk contains all 
// the numbers needed to match the sorted array till that point.
