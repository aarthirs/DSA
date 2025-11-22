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
     vector<int> solve(Node* root) {
      vector<int> res;  
        postorder(root,res); 
        return res;
     }
     void postorder(Node* root, vector<int>& res){
        if(root ==NULL) return ; 
       
        postorder(root->left , res);
        postorder(root->right,res);
         res.push_back(root->data);
     }
};
