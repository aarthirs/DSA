class LowerCase {
public:
	string solve(string s) {
           string ans=""; 
    	for(char &c:s){
            c=tolower(c);
            ans+=c;
      }
      return ans;

      }
};
