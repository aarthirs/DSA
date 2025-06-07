class MinBitFlips {
public:
	int solve(int start,int goal) {
            bitset<8> startBits(start);
            bitset<8>  goalBits(goal);
            int count=0;
    		for(int i=0;i<8;i++){
                  if(startBits[i] != goalBits[i]){
                        count++;
                  }
            }
            return count;
      }
};
