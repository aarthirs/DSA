class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int> lc(n,1);
        vector<int> rc(n,1); 

        // left
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                lc[i]=lc[i-1]+1;
            }
        }

        //right
        for(int i=n-2 ; i>=0 ;i--){
            if(ratings[i]>ratings[i+1]){
                rc[i]=rc[i+1]+1;
            }
        }
        //sum 
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=max(lc[i],rc[i]);
        }

        return sum;
    }
};
