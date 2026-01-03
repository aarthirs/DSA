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
    vector<int> res;
     vector<int> solve(Node* root) {
        // Your code here
        int level=0 ; 
        rightview(root,level);
        return res;
     }

     void rightview(Node* root , int level){
        if(!root) return; 
        if(level== res.size()){
            res.push_back(root->data);
        }
        rightview(root->right,level+1); 
        rightview(root->left,level+1);
     }
};

// general : who reach the level first there data will take into res;
