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
     bool solve(Node* root1, Node* root2) {
        // Your code here 
        if(root1==NULL && root2==NULL){
            return root1==root2; 
        }
        if (root1 == NULL || root2 == NULL) return false;

        return(root1->data == root2->data)&& solve(root1->left,root2->left)&& solve(root1->right,root2->right);
     }
};

/*
Before comparing data, you must check:

If both are NULL → return true

If one is NULL → return false

Otherwise compare values and children
*/
