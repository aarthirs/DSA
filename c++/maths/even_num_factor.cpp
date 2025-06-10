class Even {
public:
	int solve(int n) {
            int evenSum=0;
    		for(int i=1;i<=n;i++){
                  if(n%i ==0){
                        if(i%2 == 0){
                              evenSum+=i;
                        }
                  }
            }
            return evenSum;
      }
};
