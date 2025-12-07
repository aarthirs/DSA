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
        if(root==NULL) return 0; 
        if(root->left && !root->left->left && !root->left->right) return root->left->data + solve(root->right); 
        return solve(root->left)+solve(root->right);

     }
};

/*
sum all the left leave node 
include both right and left root node but counting only left leaves 
*/
