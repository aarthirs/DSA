class CountBits {
public:
     vector<int> solve(int N) {
	       vector<int> arr;
            for(int i=0;i<=N;i++){
               int count=0;
               bitset<8> bits(i);
               for(int j=0;j<8;j++){
                    if(bits[j]==1){
                         count++;
                    }
               }
               arr.push_back(count);
            }
            return arr;
     }
};
