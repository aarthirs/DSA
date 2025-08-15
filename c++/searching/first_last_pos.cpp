class Search {
public:
     vector<int> solve(vector<int> input,int target) {
		vector<int> resultArr; 
          int start=-1, end=-1;
          for(int i=0;i<input.size();i++){
               if(input[i]==target){
                    start=i;
                    resultArr.push_back(start);
                    break;
               }
          }

          for(int i=input.size()-1;i>=0;i--){
               if(input[i]==target){
                    end=i;
                    resultArr.push_back(end);
                    break;
               }
          }

          if(resultArr.size()==0){
               return {-1,-1}; 

          }
          else{
               return resultArr;
          }
     }
};
