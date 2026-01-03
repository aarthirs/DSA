/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> respath; 
        vector<int> path;
        findPath(root,targetSum,path,respath); 
        return respath;
    }

    void findPath(TreeNode* root, int sum , vector<int>& path , vector<vector<int>>& respath){
        if(!root) return ; 
        path.push_back(root->val);
        if(!root->left && !root->right && sum==root->val) {
            respath.push_back(path);
        }
       findPath(root->left,sum-root->val,path, respath);
       findPath(root->right,sum-root->val,path, respath);
       path.pop_back();
    }
};
/*
backtracking to get the path 
pop_back explain : 7 we pushing but it not giving target then popup the 7 
*/
