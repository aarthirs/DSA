class Pattern {
public:
     vector<string> solve(int N) {
		vector<string> result;
          for(int i=0;i<N;i++){
               string temp;
               for(int j=0;j<N;j++){
                    if(j==0||j==N-1||i==0||i==N-1){
                          temp+="*";
                    }
                    else{
                         temp+=" ";
                    }
               }
               result.push_back(temp);
          }
          return result;
     }
};
