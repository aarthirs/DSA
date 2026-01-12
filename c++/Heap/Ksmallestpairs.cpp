class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> ans; 
        priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> pq; 

        //nums1 sums
        for(int i=0; i<min(k,(int)nums1.size());i++){
            pq.push({nums1[i]+nums2[0],i,0});
        }

        while(k-- && !pq.empty()){
            auto [sum , i ,j]=pq.top(); 
            pq.pop(); 
            ans.push_back({nums1[i],nums2[j]}); 
            //here inc j 
            if(j+1<(int)nums2.size()){
                 pq.push({nums1[i]+nums2[j+1],i,j+1});
            }
        }
        return ans;
    }
};

/*
1.it is a sorted arrs :
nums1 = [a, b, c]
nums2 = [x, y, z]

Grid of sums:
        x       y       z
a    a+x     a+y     a+z [--j++] 
b    b+x     b+y     b+z
c    c+x     c+y     c+z
Properties:
Each row is sorted (nums2 is sorted)
Each column is sorted (nums1 is sorted)
This is a sorted matrix.

Because both arrays are sorted, starting with the first column (j = 0) and 
then incrementing j step by step is sufficient to generate the k smallest pairs in correct order.
*/
