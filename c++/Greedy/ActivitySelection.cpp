class ActivitySelection {
public:
     vector<int> solve(vector<int> input1,vector<int> input2) {
		int i=0 ;
          vector<int> ans;
          ans.push_back(i); 
          for(int j=1;j<input2.size();j++){
               if(input1[j]>=input2[i]){
                    i=j;
                    ans.push_back(j);
               }
          }
          return ans;
     }
};

/*
1.if it isn't sorted -- sort them 
2.based on finishing time compare 
*/
