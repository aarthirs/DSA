/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; 


class Solution {
public:
     bool solve(Node* root, int sum) {
        // Your code here
        if(root==NULL) return false ; 
        if (root->data == sum && root->left==NULL && root->right ==NULL) return true;  // checking we reached left node full iteration
        return solve(root->left, sum-root->data)||solve(root->right,sum - root->data);
     }
};
