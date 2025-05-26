class ReverseArray {
public:
     vector<int> reverse(vector<int> input) {
	   int len= input.size();
        vector<int> arr;
        for(int i=len-1;i>=0;i--){
              arr.push_back(input[i]);
        }
        return arr;
     }
};
