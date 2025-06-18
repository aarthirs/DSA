class CheckIfExist {
public:
     bool check(vector<int> input) {
          bool checkvar =false;
		for (int i=0;i<=input.size()-1;i++){
               for (int j=0;j<input.size();j++){
                    if(input[i]==2*input[j]){
                         checkvar= true;
                         break;
                    }
               }
          }
          return checkvar;
     }
};
