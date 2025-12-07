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
    int isBalanced(Node* root){
        if(root ==NULL) return 0 ;

        int leftval= isBalanced(root->left); 
        if(leftval==-1){
            return -1; 
        }
        int rightval = isBalanced(root->right); 
        if(rightval==-1) return -1; 

        if(abs(rightval- leftval)>1) return -1; 

        return max(leftval,rightval)+1;
    }
     bool solve(Node* root) {
        // Your code here
        return isBalanced(root) != -1; 
     }
};

/*
Balance BT : 
 root = right-left ==0 
 here all root node will be zero ; 
*/
