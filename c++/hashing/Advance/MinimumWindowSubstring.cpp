class MinimumWindowSubstring {
public:
	string solve(string s,string t) {
    		vector<int> freqT(128,0); 
            for(char c: t) freqT[c]++; 
            int required=t.length() , left=0 , right=0,start=0 , minlen=INT_MAX;

            for(int right=0; right<s.length();right++){
                  if(freqT[s[right]]>0) required--; // yeh it is in freq
                  freqT[s[right]]-- ; //removing from the freq

                  while(required==0){
                        if(right-left+1<minlen){
                        minlen=right-left+1 ; 
                        start=left ; 
                        }
                       

                        freqT[s[left]]++; // shrinking the window 
                        if(freqT[s[left]]>0) required++; // we have made all char as 0 and come here by left++ it got inc so stop shrinking and expand again
                        left++;
                  }

            }
            return minlen==INT_MIN ?"":s.substr(start, minlen);
      }
};
/*
We’re removing the leftmost character.
If that makes the window lose a needed character,
mark the window as invalid again,
and stop shrinking any further
*/
