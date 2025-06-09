class Gcd {
public:
	int gcd(int a,int b) {
    		
            if(a<b){
                  int temp =a;
                  a=b; 
                  b=temp;
            }
            while(b!=0){
                  int temp =a ;
                  a=b;
                  b= temp%b;
            }
            return a;
      }
};
