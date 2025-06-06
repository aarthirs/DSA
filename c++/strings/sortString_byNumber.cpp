class SortSentence {
public:
	string solve(string s) {
    		stringstream ss(s);
            string word;
            vector<string> arr; 
            string resultStr="";
            while(ss>>word){
                  arr.push_back(word);
            }

            sort(arr.begin(),arr.end(),[](const string &a,string &b){
                  return a.back()<b.back();
            });

            for(int i=0;i<=arr.size()-1;i++){
                resultStr+=arr[i].substr(0,arr[i].size()-1);
                if(i != arr.size()-1) resultStr += " "; 
         
            }
            return resultStr;
      }
};
