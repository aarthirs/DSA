class Smaller {
public:
     vector<int> smaller(vector<int> input) {
		int n=input.size(); 
          vector<int> arrRes;
          for(int i=0;i<input.size();i++){
               if (i==n-1){
                    arrRes.push_back(-1);
               }
               else{
                    if(input[i]>input[i+1]){
                         arrRes.push_back(input[i+1]);
                    }
                    else{
                         arrRes.push_back(-1);
                    }
               }
          }
          return arrRes;
     }
};
