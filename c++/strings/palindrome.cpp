class Palindrome {
public:
	bool check(string s) {
            string result=s;
            reverse(result.begin(),result.end());
            return result == s;
      }
};
