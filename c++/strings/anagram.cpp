class Anagram {
public:
	bool check(string str1, string str2) {
    		transform(str1.begin(),str1.end(),str1.begin(),::tolower);
            transform(str2.begin(),str2.end(),str2.begin(),::tolower);

            if (str1.length() != str2.length()){
                  return false;
            }
            
            int freq[26]={0};

            for(int i=0;i<str1.length();i++){
                  freq[str1[i]- 'a']++; //increasing
                  freq[str2[i] - 'a']--;// then same value get decrease to 0
            }

            for(int i=0;i<26;i++){
                  if(freq[i] !=0) return false;
            }
            return true;

            
      }
};
