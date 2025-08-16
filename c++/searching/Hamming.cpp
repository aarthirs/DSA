class Hamming {
public:
     int solve(vector<int> input) {
		int n=input.size(); 
          int ans=0;
          for(int i=0;i<32;i++){
               int one=0, zero=0; 
               for(int j=0;j<n;j++){
                    int bit=(input[j]>>i)&1 ; 
                    if(bit ==1) one++;
                    else zero++;
               }
               ans+=one*zero;
          }
          return ans;
     }
};

/*

-- here i is the position and j is val in input arr
 Example with nums = [4, 14, 2]

Binary forms:

    4 = 0100

    14 = 1110

    2 = 0010

Let’s check bit by bit:

    Bit 0 (LSB): 4=0, 14=0, 2=0 → all 0 → ones=0, zeros=3 → contribution = 0

    Bit 1: 4=0, 14=1, 2=1 → ones=2, zeros=1 → contribution = 2×1 = 2

    Bit 2: 4=1, 14=1, 2=0 → ones=2, zeros=1 → contribution = 2×1 = 2

    Bit 3: 4=0, 14=1, 2=0 → ones=1, zeros=2 → contribution = 1×2 = 2

Sum = 2+2+2 = 6 

*/
