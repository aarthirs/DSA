class CircularSentence {
public:
	bool check(string s) {
    		stringstream ss(s);
            string word;
            vector<string> arr; 
            bool checkCircular=false;
            while(ss >>word){
                  arr.push_back(word);
            }

            if (arr.size()==1){
                 return arr[0].front() == arr[0].back();
            }
           
            for(int i=0;i< arr.size()-1;++i){
                 if(arr[i].back() != arr[i+1].front()){
                  return false ;
                 }
            }

            if(arr.back().back() != arr[0].front()){
                  return false;
            }
             
           return true;
      }
};
