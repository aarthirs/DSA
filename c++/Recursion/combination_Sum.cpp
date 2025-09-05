class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res; 
        vector<int> comb; 
        combinations(candidates , target , 0 ,comb, res);
        return res;
    }
    void combinations(vector<int>& candidates, int target,int idx, vector<int>& comb, vector<vector<int>>& res){

        if(target==0){
            res.push_back(comb);
            return;
        }

        if(target<0){
            return;
        }
        for(int i =idx ; i<candidates.size();i++){
            comb.push_back(candidates[i]);
            combinations(candidates,target - candidates[i],i,comb,res);
            comb.pop_back();
         }
    }
};

/*
pushing each candidates 
on each specific idx try to decrement the target 
pop up that idx and the same time if the target==0 then it is stored in res .
*/
