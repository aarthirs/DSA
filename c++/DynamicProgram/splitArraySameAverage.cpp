class Solution {
public:
    bool splitArraySameAverage(vector<int>& input) {
        int n=input.size(); 
          int totalsum=accumulate(input.begin(),input.end(),0); 
          int maxSum=totalsum;
          int maxk=n/2 ; 

          bool possible=false; 
          for(int k=1;k<=maxk;k++){
            if((totalsum*k)%n==0){
                possible=true;
                break;
            }
          }

          if(!possible) return false;

         vector<unordered_set<int>> dp(maxk+1);
          dp[0].insert(0);

          for(int num:input){
               for(int k=maxk;k>0;k--){
                    for(int s:dp[k-1]){
                        dp[k].insert(s+num);
                    }
               }
          }
// subset size k and subset sum s:

// s / k = totalSum / n
//  s = (totalSum * k) / n
          for(int k=1;k<=maxk;k++){
               if((totalsum*k)%n ==0){
                    int target = (totalsum*k)/n;
                    if(dp[k].count(target)){
                         return true;
                    }
               }
          }
          return false;
    }
};

/*

dp[0] = {0}
dp[1] = all sums of 1 element
dp[2] = all sums of 2 elements
...
Each new number extends previous subsets


Is there a subsetof size k with sum = target?
If yes = same average exists 

*/
