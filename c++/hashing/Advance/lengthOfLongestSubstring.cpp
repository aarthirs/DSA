class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char , int> freq;
        int start =0 , end=0 , ans=0;
        while(end < s.length()){
            freq[s[end]]++;
            while(freq[s[end]]>1){
                freq[s[start]]--; 
                if(freq[s[start]]==0) freq.erase(s[start]); //once it is become 0 we optionally remving the space from the map
                start++;
            }
            ans=max(ans , end-start+1); //0index value so +1 --- size of the sliding window at the point 
            end++;
        }
        return ans;
    }
};
