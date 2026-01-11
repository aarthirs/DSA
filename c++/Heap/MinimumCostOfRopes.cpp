class MinimumCostOfRopes {
public:
     int solve(vector<int> input) {
		priority_queue<int,vector<int>,greater<int>> pq(input.begin(),input.end());
          int res=0;
          while(pq.size()>1){ //should continue atleat 2 val is there
               int x=pq.top(); 
               pq.pop();
               int y=pq.top(); 
               pq.pop(); 
               res+=x+y;
               pq.push(x+y);
          }
          return res;

     }
};

/*
to avoid sorting each time we are using min-heap 
*/
