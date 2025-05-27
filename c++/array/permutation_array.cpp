class Permutation {
public:
     vector<int> build(vector<int> input) {
          vector<int> result;
		for (int i=0;i<=input.size()-1;i++){
               int val=input[i];
               result.push_back(input[val]);
          }
          return result;
     }
};
