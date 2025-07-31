class SingleElement {
public:
     int find(vector<int> input) {
		int result=0;
          for (int i:input){
            result^=i;
          }
          return result;
     }
};

/*
a ^ a = 0

a ^ 0 = a

XOR is commutative and associative
So: a ^ b ^ a = (a ^ a) ^ b = 0 ^ b = b
*/
