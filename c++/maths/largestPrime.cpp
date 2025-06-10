class LargestPrime {
public:
	int solve(int n) {
    		
              vector<int> arr;
              for(int i=1;i<=n;i++){
                  if((n%i) ==0){
                        int count=0;
                      for(int j=2;j<i;j++){
                        if(i%j ==0){
                              count++;
                        }
                      }
                      if(count == 0){
                        arr.push_back(i);
                      }
                  } 

              }

              int prime= *max_element(arr.begin(),arr.end());
              return prime;
      }
};
