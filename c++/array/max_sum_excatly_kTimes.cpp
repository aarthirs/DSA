class MaximizeSum {
public:
     int solve(vector<int> input,int k) {
           int score=0;
          for(int i=0;i<k;i++){
            int max=*max_element(input.begin(),input.end());
           
            auto del=find(input.begin(),input.end(),max);
            if(del != input.end()){
               input.erase(del);
            }
            input.push_back(max+1);
            score+=max;
          }
		
          return score;
     }
};
