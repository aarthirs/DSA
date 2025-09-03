class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> subset = {{}};
        int startIndex = 0, endIndex = 0;

        for (int i = 0; i < nums.size(); i++) {
            startIndex = 0;

            // If current element is same as previous, only extend the subsets created in the previous step
            if (i > 0 && nums[i] == nums[i - 1]) {
                startIndex = endIndex + 1;
            }

            endIndex = subset.size() - 1;
            int size = subset.size();

            for (int j = startIndex; j < size; j++) {
               subset.push_back(subset[j]);
               subset.back().push_back(nums[i]);
            }
        }
        return subset;
    }
};
