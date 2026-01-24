class Solution {
public:
    int solve(vector<int>& nums , int idx , vector<int>& dp){
        // memoization 
        // if(idx>=nums.size()) return 0; 
        // if(dp[idx] != -1) return dp[idx]; 
        // return dp[idx]=max(nums[idx] +solve(nums , idx+2 , dp),solve(nums,idx+1,dp)); // max(rob , nonrob)

        //tabulation 
        if(nums.size()==1) return nums[0]; 
        dp[0]=nums[0]; dp[1]=nums[1]; 
        for(int i=2;i<nums.size();i++){
            dp[i]=max(nums[i]+dp[i-2] , dp[i-1]); // l to r 
        }
        return dp[nums.size()-1];

    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1 , -1); 
        return solve(nums ,0,dp );
    }
};
