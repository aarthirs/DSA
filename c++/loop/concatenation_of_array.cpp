class Concatenation {
public:
     vector<int> solve(vector<int> input) {
          vector<int> temp = input;
		for (int i=0;i<=input.size()-1;i++){
               temp.push_back(input[i]);
          }
          return temp;
     }
};
