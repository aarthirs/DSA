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
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN; 
        height(root , maxi);
        return maxi;
    }
    int height(TreeNode* root , int& maxi){

        if(root==nullptr) return 0; 
        int lh=max(0,height(root->left , maxi));
        int rh=max(0,height(root->right , maxi));
        maxi=max(maxi,root->val+lh+rh); 

        return root->val+ max(lh,rh);
    }
};

/*
✔ height() return = best path one-side upward
✔ maxi = actual maximum path sum (may include 2 branches)
✔ Therefore, height return is necessary for recursion
✔ But final result returns from maxi, not from height()
*/
