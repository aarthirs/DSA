class Solution {
public:
    int lastStoneWeight(vector<int>& input) {
        priority_queue<int> pq(input.begin(),input.end()); 

          while(pq.size()>1){
               int y = pq.top(); // x<=y so declare y then x 
               pq.pop();
               int x=pq.top(); 
               pq.pop();
               if(x!=y){
                   pq.push(y-x);// to avoid neg val
               }
               
          } 
          return pq.empty()?0:pq.top();

    }
};
