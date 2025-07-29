class Magic {
public:
      long long gcd(long long a,long long b){
            return b == 0 ? a : gcd(b,a%b);
      }
	int solve(int n,int a,int b) {
    		int mod = 1e9+ 7 ; 
            long long low=min(a,b);
            long long max= (long long)n* low;
            long long lcm = (long long)a *b / gcd(a,b);

            while(low<max){
                  long long mid= low+max / 2 ; 
                  long long count = (mid /a) +(mid/b) - (mid / lcm) ;
                  if(count<n ){
                        low=mid+1;
                  }
                  else{
                        max=mid;
                  }

            }
            return (int)low % mod ;
      }
};

/*
--for lcm we are euclidian formula : lcm(a,b)= a×b​ /gcd(a,b) 
--we use binary search to find the postiion nth that divides either a or b 
--count is added and sub because in some case both a and b are divides 
*/
