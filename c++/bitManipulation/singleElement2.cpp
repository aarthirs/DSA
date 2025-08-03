class SingleElement {
public:
     int find(vector<int> input) {
	int ans=0 ; 
     for(int pos=0;pos<=32;pos++){
          int bitCount=0; 
          for(int i=0;i<input.size();i++){
               int bit = (input[i]>> pos) & 1 ; 
               bitCount += bit ;
          }
          int val= bitCount % 3; 
          int mask = val << pos ; 
          ans|=mask;
     }
     return ans;
     }
};

// 3n+1 i.e., thrice the number in each col one val will be unique 
