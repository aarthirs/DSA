class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size(); 
        int start=0 , end=0 ; 
        deque<int> q; 
        vector<int> ans;
        while(end<n){
            while(!q.empty() && q.back()<nums[end]){ // 2 in q < 3 in nums 
                q.pop_back();
            }
            q.push_back(nums[end]);

            if(end-start+1 ==k){
                ans.push_back(q.front());
                if(q.front()==nums[start]) q.pop_front(); // 1, 2, 3 for next iteration 2,3 we need to shrink this 
                start++ ; 
            }
            end++;
        }
        return ans;

    }
};
