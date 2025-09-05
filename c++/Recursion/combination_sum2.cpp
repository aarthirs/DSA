class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res ; 
        vector<int> comb; 
        combination(candidates,target,0,comb , res); 
        return res;
    }
    void combination(vector<int>& candidates , int target , int idx , vector<int>& comb , vector<vector<int>>& res){
        if(target==0){
            res.push_back(comb);
            return;
        }
        if(target<0){
            return;
        }
        for(int i = idx ; i < candidates.size();i++){
            if(i>idx && candidates[i]==candidates[i-1]){
                continue;
            }

            if(candidates[i]>target){
                break;
            }
            comb.push_back(candidates[i]);
            combination(candidates , target-candidates[i] , i+1, comb , res); 
            comb.pop_back();
        }
        
    }
};


/*
-- simple logic is decrement target with candidate give you optimal solution 
--when input has duplication : sort and check for currect and previous int 

*/
