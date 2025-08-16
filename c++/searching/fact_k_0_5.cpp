class Factorial {
public:
	int solve(int K) {
            int sum[13]={1};
            for (int i=1; i<13; i++) sum[i]=sum[i-1]*5+1;
            for (int i=12; i>=0; i--) {
                  if (K/sum[i]==5) return 0; // skipped part
                  K=K%sum[i]; 
            }
            return 5;
      }
};

/*
1.sum[i] tells us the range of k-values we can reach at that "power of 5" level
simple:
If k is “skipped” because of an extra factor of 5², 5³, … → answer is 0.
Otherwise → answer is 5.
*/
