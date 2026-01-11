class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
       int n = arr.size();
        vector<int> res(n);

        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        > minhp;
        for (int i = 0; i < n; i++) {
            minhp.push({arr[i], i});
        }
        int rank=0 ,i=0; int prevEle=INT_MIN ;

        while(!minhp.empty()){
            auto [current,idx]=minhp.top();
            minhp.pop();

            if(current != prevEle){
                rank++; 
                prevEle=current;
            }
            res[idx]=rank;
        }
        return res;
    }
};

/*
minheap pair<ele , idx>
gonna maintain : current element , previous element , rank
if current element is same as previous ignore , else rank+1
assign rank to that number idx , that's the reason of maintaining idx in pair
*/
