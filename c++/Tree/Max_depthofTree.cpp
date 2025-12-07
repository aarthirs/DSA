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
     int solve(Node* root) {
        // Your code here
        if(root==NULL) return 0 ;
        int l=solve(root->left);
        int r=solve(root->right);
        return max(l,r)+1;

     }
};
