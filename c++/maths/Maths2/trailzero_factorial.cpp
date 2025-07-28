class Factorial {
public:
	int solve(int n) {
            int trailZero=0;
    		while(n>=5){
                  trailZero += n/5 ; 
                  n/=5;
            }
            return trailZero;
      }
};

/*
we get trail zero's when n is multiple of 2 and 5 = 10 ; 
so finding factor of 5 and count that ;
*/
