class SelfDividingNumbers {
public:
	vector<int> solve(int left,int right) {
    		vector<int> result; 

            for(int i=left; i<=right; i++){
                  int temp = i; 
                  while(temp>0){
                        int digit = temp %10; 
                        if(digit ==0 || i%digit != 0){
                              break;
                        }
                        temp/=10; 
                  }
                  if(temp == 0){
                        result.push_back(i);
                  }
            }

            return result;
      }
};

// eg: 13 if 13%3 !=0  so skip that loop so temp !=0 
