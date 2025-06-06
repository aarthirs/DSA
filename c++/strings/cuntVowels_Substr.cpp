class CountVowelSubstrings {
public:
      bool isVowel(char c){
            return string("aeiuo").find(c) != string::npos;
      }
	int solve(string s) {
    		int count =0 ;
            int n=s.length();

            for(int i=0;i<n;i++){
                  if (!isVowel(s[i])) continue; 
                  unordered_set <char> vowelSet; 
                  for(int j=i;j<n && isVowel(s[j]);++j){
                        vowelSet.insert(s[j]);
                        if(vowelSet.size()==5){
                              count++;
                        }
                  }
            }
            return count;

      }
};
