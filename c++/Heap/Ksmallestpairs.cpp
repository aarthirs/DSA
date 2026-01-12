class KSmallestPairs {
public:
     vector<vector<int>> solve(vector<int> input1, vector<int> input2, int k) {
		priority_queue<pair<int, pair<int,int>>> pq; 
          for(int i=0;i<input1.size();i++){
               for(int j=0;j<input2.size();j++){
                    int sum=input1[i]+input2[j]; 
                    if(pq.size()<k) pq.push({sum,{input1[i],input2[j]}});
                    else if (sum < pq.top().first){
                         pq.pop(); 
                         pq.push({sum,{input1[i],input2[j]}});
                    }
               }
          }
          vector<vector<int>> ans;
          while(!pq.empty()){
               //pq(5, make_pair(10, 20))
               ans.push_back({pq.top().second.first , pq.top().second.second});
               pq.pop();
          }
           reverse(ans.begin(),ans.end());
          return ans;
     }
};
