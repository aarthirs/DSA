/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL; 
        int curr=root->val ; 
        if(curr<p->val && curr<q->val) return lowestCommonAncestor(root->right,p,q); 
        if(curr>p->val && curr>q->val) return lowestCommonAncestor(root->left,p,q);
        return root;
    }
};

/*
since it is BST we know the condition 
if root < val -> right else left 
return need to added in each condition: If both p and q are greater → go right

If both are smaller → go left

Otherwise → current node is LCA
*/
