class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        vector<int> sums=mat[0]; // initial sum
        for(int r=1;r<mat.size();r++){ //merge row by row
           priority_queue<
                pair<int,int>,
                vector<pair<int,int>>,
                greater<pair<int,int>>
            > pq;
            for(int i=0; i< min(k,int(sums.size()));i++){
                    pq.push({sums[i]+mat[r][0],0});//Pair each old sum with the first element of the new row.
            }
            vector<int> next;//Will store the new smallest sums after merging this row.
            while(next.size()< k &&!pq.empty()){
            auto [sum,idx]=pq.top();
            pq.pop();
            next.push_back(sum);//Save this sum as one of the best answers so far.
            if(idx+1<mat[r].size()){
                pq.push({sum-mat[r][idx]+mat[r][idx+1],idx+1}); //Remove old column value, add next column value
            }
           
            }
            sums=next;//Drop everything except top k
           
        }
        return sums[k-1];
    }

};

//
