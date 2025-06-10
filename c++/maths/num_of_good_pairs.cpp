class GoodPairs {
public:
     int count(vector<int> input) {
          int n=input.size()-1;
          int count=0;
		for(int i=0;i<=n;i++){
               for(int j=0;j<=n;j++){
                    if((input[i]== input[j]) && (i<j)){
                         count++;
                    }
               }
          }
          return count;
     }
};
