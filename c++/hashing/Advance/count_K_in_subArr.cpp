class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ps[nums.size()] ;
        map<int , int> mp ; 
        ps[0]=nums[0];
        for(int i=1;i<nums.size();i++){
           ps[i] =ps[i-1]+nums[i];
        }
        int count =0 ;
        for(int i=0;i<nums.size();i++){
            if(ps[i]==k) count++; // direct sum
            if(mp.find(ps[i]-k)!= mp.end()) count +=mp[ps[i]-k]; // indirect sum 
            mp[ps[i]]++; // key is ps , freq is it's cnt 
        }
        return count;
    }
};
