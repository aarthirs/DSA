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
       queue<Node*> q; 
       if(!root) return 0;
       q.push(root); 
       while(!q.empty()){
          root= q.front(); 
          q.pop(); 

          if(root->right) q.push(root->right); 
          if(root->left) q.push(root->left); 
       }
       return root->data;
     }
};

/*
In level order, the first node of the last level is the answer.
so inorder to achieve that  first push right and then left
*/
