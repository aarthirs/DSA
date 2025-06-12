class Maximum69Number {
public:
	int solve(int n) {
    		string strNum = to_string(n);
            for(char &c:strNum){
                  if(c=='6'){
                        c='9';
                        break;
                  }
            }
            return stoi(strNum);
      }
};
