class TrailingZero {
public:
	int solve(int n) {
    		bitset<64> bits(n);
            
            int zero=0;
            for(int i=0;i<64;i++){
                  if(bits[i]==0){
                        zero++;
                  }
                  else{
                        break;
                  }
            }
            return zero;
      }
};
