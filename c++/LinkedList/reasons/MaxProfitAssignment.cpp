class MaxProfitAssignment {
public:
     int solve(vector<int> input1,vector<int> input2, vector<int> input3) {
		vector<pair<int,int>> jobs; 
          int best=0 ,i=0 , res=0;
          for(int j=0;j<input1.size();j++){
               jobs.push_back(make_pair(input1[j],input2[j]));
          }
          sort(jobs.begin(),jobs.end());
          sort(input3.begin(),input3.end());

          for(int & workerAbility : input3){
               while(i<jobs.size() && workerAbility >= jobs[i].first){
                    best =max(best , jobs[i++].second); 
               
               }
               res+=best;
          }
          return res;
     }
};

/*
1.sort the pair wih difficulty  and sort the workers 

*/
