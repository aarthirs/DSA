class Reverse {
public:
	int solve(int n) {
    		int reverse=0;
            while(n){
                  reverse=(reverse*10)+n%10;
                  n/=10;
            }
            return reverse;
      }
};
