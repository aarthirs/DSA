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
     vector<int> arr; 
     map<Node*,Node*> parent; 
     unordered_set<Node*> visited;
     void findParent(Node* root){
        if(!root) return ; 
        if(root->left){
            parent[root->left]=root;
            findParent(root->left);
        }
          if(root->right){
            parent[root->right]=root;
            findParent(root->right);
        }
     }

     Node* findTarget(Node* root, int target) {
    if (!root) return nullptr;
    if (root->data == target) return root;

    Node* left = findTarget(root->left, target);
    if (left) return left;
    //else same as left 
    return findTarget(root->right, target);
}
     vector<int> solve(Node* root, int target, int k) {
      
        if(!root) return {}; 
        findParent(root);
        Node* targetNode = findTarget(root, target);
        if (!targetNode) return {};   // target not found
        dfs(targetNode,k);
        sort(arr.begin(),arr.end());
        return arr;
     }

     void dfs(Node*root,int k){
        if (!root || visited.count(root)) return;

        visited.insert(root);

        if (k == 0) {
            arr.push_back(root->data);
            return;
        }

        dfs(root->left, k - 1);
        dfs(root->right, k - 1);

        if (parent.find(root) != parent.end()) {
            dfs(parent[root], k - 1);
        }
    }
};


/*
1. mapping eachnode with child-parent 
2.dfs : left , right , parent 
*/
