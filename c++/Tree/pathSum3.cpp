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
     int solve(Node* root, int sum) {
        // Your code here
        if(!root) return 0;
        int count=0 ; 
        //consider each node as starting 
        count = findPath(root,sum); 

        // exploring subtree:
        count+=solve(root->left,sum);
        count+=solve(root->right,sum);
        return count;
     }

     int findPath(Node*root, int sum){
        if(!root) return 0;
        int cnt=0;
        if(root->data == sum) {
            cnt++; // current node 
        }
        cnt+=findPath(root->left,sum-root->data); // for count include complete path
        cnt+=findPath(root->right,sum-root->data);
        return cnt;
     }
};
