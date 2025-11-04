class LongestConsecutiveSequence {
public:
     int solve(vector<int> input) {
		unordered_set <int> myset(input.begin(),input.end()); 
          int maxlen=0;
          for(int i=0;i<input.size();i++){
               if(myset.find(input[i]-1) == myset.end()){ // if previous value is there then don't enter into the loop 
                           int cnt=1 ; 
                           while( (myset.find(input[i]+1) != myset.end())){ // inbetween the range 
                              cnt++;
                              input[i]++;
                           }
                      maxlen=max(maxlen,cnt);   
               }
          }
          return maxlen;
     }
};
