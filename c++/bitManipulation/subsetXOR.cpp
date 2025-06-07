class SubsetXOR {
public:
     int sum(vector<int> input) {
		int bits=0;
          for(int i=0;i<input.size();i++){
               bits|=input[i];
              
          }
          int sum=bits* pow(2,input.size()-1);
          return sum;
     }
};
