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
     Node* solve(Node* root) {
        // Your code here
        queue<Node*> q; 
        q.push(root); 
        while(!q.empty()){
            Node*curr=q.front(); 
            q.pop();
            swap(curr->left,curr->right);
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
        return root;
        
     }
};

//You pushed the pointer, not the node. Modifying through any pointer modifies the same tree
