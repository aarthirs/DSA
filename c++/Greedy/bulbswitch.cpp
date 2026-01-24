class Solution {
public:
    int bulbSwitch(int n) {
        int cnt =0 ; 
        for(int i=1;i*i <=n ;i++){
            cnt++;
        }
        return cnt;
    }
};

//For the ith round, you toggle every i bulb.(i, 2i, 3i, ...) 
//We want to find how many bulbs are on after n rounds (In the end).

// That means we need to find out how many perfect square numbers are NO MORE than n.
