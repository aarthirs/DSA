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
    int maxLevelSum(TreeNode* root) {
        int maxval=INT_MIN ,mlevel=0, lvl=0; 
        queue<TreeNode*> q; 
        if(!root) return 0; 
        q.push(root); 
        while(!q.empty()){
            int sum=0;
            int size=q.size();
            lvl++;
            while(size--){
                TreeNode* node= q.front(); 
                q.pop();
                sum+=node->val;
                //pushing it for next level 
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            if(sum>maxval){
                maxval=sum;
                mlevel=lvl;
            }
        }
        return mlevel;
    }
};
