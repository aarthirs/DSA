class AreNumbersAscending {
public:
	bool check(string s) {
    		stringstream ss(s);
            string word;
            bool checkInc=false ;
            vector<string> arr;

            while(ss>> word){
                  arr.push_back(word);
            }

            int prev =-1 ;

            for(string str:arr){
                  if(isdigit(str[0])){
                        if(stoi(str)>prev){
                              prev=stoi(str);
                              checkInc=true;
                        }
                        else{
                        checkInc=false;
                        break;
                        }
                      
                  }
            }
            return checkInc;

      }
};
