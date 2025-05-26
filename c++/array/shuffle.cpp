class Shuffle {
public:
     vector<int> shuffle(vector<int> input) {
        int len= input.size();
        int half_value=len/2;
        int n=half_value;
        int i=0;
        vector<int> result;
        while(i<half_value){
              result.push_back(input[i]);
              result.push_back(input[n]);
              n++;
              i++;
        }
        return result;
     }
};
