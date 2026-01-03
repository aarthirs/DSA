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
    int sumNumbers(TreeNode* root) {
       return dfs(root,0);
    }
    int dfs(TreeNode*root,int cntval){
        if(!root) return 0; 
        cntval=cntval*10+root->val;// best thing to append the integer 
        if(!root->left && !root ->right){
           return cntval;
        }
        return dfs(root->left,cntval) +dfs(root->right,cntval);
    }
};


//dfs -preorder
