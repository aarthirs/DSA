class Solution {
public:
   vector<int> dp;
   int solve(vector<int>&nums,int start,int end){
    int len=end-start; 
    dp.assign(len,-1); 
    dp[0]=nums[start]; 
     if (len > 1)
            dp[1] = max(nums[start], nums[start + 1]);

    for(int i=2;i<len;i++){
        dp[i]=max(nums[start+i]+dp[i-2] , dp[i-1]);
    }
    return dp[len-1];
   }
    int rob(vector<int>& nums) {
        int n=nums.size(); 
        if(n==1) return nums[0];
        return max(solve(nums,0,n-1) , solve(nums,1,n)); 
    }
};

//op1: expect last house 
// op2:expect first house
// concept rob: i+2 and non rob: i+1 next house
