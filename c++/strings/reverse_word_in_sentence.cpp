class Reverse {
public:
	string solve(string s) {
    		vector<string> arr;
            string resultStr="";
            stringstream ss(s);
            string word;

            while(ss>>word){
              arr.push_back(word);
            }
          
            for(int i=arr.size()-1;i>=0;i--){
                  resultStr+=arr[i];
                  if (i != 0) resultStr += " ";
            }
            return resultStr;
      }
};
