class Divide {
public:
	int divide(int a,int b) {
    		long left=0 , right = abs(a); 
            long divisor= abs(b) , dividend=abs(a);
            long ans=0;
            if(a == INT_MIN && b == -1) return INT_MAX;
            while(left<=right){
                  int mid= left+(right-left)/2 ; 
                  if(mid*divisor == dividend ){
                        ans=mid; 
                        break;
                  } 
                  if(mid*divisor > dividend){
                        right=mid-1 ;
                  }
                  else{
                        ans=mid; 
                        left=mid+1;
                  }
            }

            if((a>0 && b>0) || (a<0 && b<0)){
                  return int(ans);
            }
            else{
                  return int(-ans);
            }
      }
};

/*
approach here is q*divisor=dividend 

 How it works step by step:

Example: dividend = 37, divisor = 3

    Search space for quotient = [0 … 37].

    Pick middle = 18.
    → 18 * 3 = 54 > 37, so move left (end = 17).

    Now mid = 8.
    → 8 * 3 = 24 < 37, so possible answer = 8, but maybe bigger → search right (start = 9).

    mid = 13.
    → 13 * 3 = 39 > 37 → move left (end = 12).

    mid = 10.
    → 10 * 3 = 30 < 37 → possible answer = 10 → search right (start = 11).

    mid = 11.
    → 11 * 3 = 33 < 37 → answer = 11 → search right (start = 12).

    mid = 12.
    → 12 * 3 = 36 < 37 → answer = 12 → search right (start = 13).

    Loop ends. Final answer = 12.
*/
