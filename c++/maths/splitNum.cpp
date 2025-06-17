class SplitNum {
public:
	int solve(int n) {
    		string strN= to_string(n);
            int len_str= strN.length();
            vector<char> digits(strN.begin(),strN.end());
            sort(digits.begin(), digits.end());
            string evenalternative = "";
            string oddalternative="";
            for(int i=0;i<len_str;i++){
                  if (i%2==0){
                        evenalternative+=digits[i];
                  }
                  else{
                        oddalternative+=digits[i];
                  }
            }
            int evenalt= stoi(evenalternative);
            int oddalt=stoi(oddalternative);

            return evenalt+oddalt;
      }
};
