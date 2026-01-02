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
 void solve(TreeNode* root , vector<int>& ansArr){
        if(root==NULL) return;
        solve(root->left,ansArr); 
        ansArr.push_back(root->val);
        solve(root->right,ansArr);
    }
  
    int kthSmallest(TreeNode* root, int k) {
      vector<int> ansArr; 
      solve(root,ansArr);
      return ansArr[k-1];

    }
      
};

/*
inorder traversal 
tracking arr and return 
*/
