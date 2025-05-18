class Palindrome {
public:
	bool check(int n) {
    		string s= to_string(n);
            string newword="";
            for (int i=s.length()-1;i>=0;i--){
                  newword+=s[i];
            }
            return newword==s;

      }
};
