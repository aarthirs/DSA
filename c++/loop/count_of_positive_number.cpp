class Positive {
public:
     int count(vector<int> input) {
          int count=0;
		for (int i:input){
              if (i>=1){
                  count +=1;
              }
          }
          return count;
     }
};
