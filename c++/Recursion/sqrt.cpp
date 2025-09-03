class Solution {
public:
    int mySqrt(int x) {
        if(x==0 ||x==1) return x ; 
        int bit= 1<<15 ;  // taking highest possible number 32 bit
        int res=0; 
        while(bit>0){
            int ans=res+bit; 
            if((long long)ans*ans <= x){
                res=ans;
            }
            bit>>=1 ; // reducing it 
        }
        return res;
    }
};
