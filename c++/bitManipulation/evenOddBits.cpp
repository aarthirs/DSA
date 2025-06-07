class EvenOddBit {
public:
     vector<int> solve(int N) {
		bitset<64> bits(N);
          int even=0;int odd =0;
          
          for(int i=0;i<64;i++){
               if(bits[i]== 1){
                    if(i%2 ==0){
                         even++;
                    }
                    else{
                         odd++;
                    }
                
               }
          }
          return {even,odd};
          
     }
};
