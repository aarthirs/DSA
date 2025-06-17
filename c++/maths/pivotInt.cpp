class Pivot {
public:
	int solve(int n) {
    		int totalsum =(n*(n+1))/2 ;
            int presum =0;
            for(int i=1;i<=n;i++){
                  presum+=i;
                  if((totalsum - presum +i )== presum){
                        return i;
                  }
            }
            return -1;
      }
};
