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
        // Your code here
        stack<Node*> st;
        vector<int> arr;
        Node*curr=root;
        while(true){
            if(curr){
                st.push(curr); 
                curr=curr->left;
            }
            else{
                if(st.empty()) break;
                curr=st.top();
                st.pop();
                arr.push_back(curr->data);
                curr=curr->right;
            }
        }
        return arr;
     }
};

/*
this one is similar to level order traversal only difference is here we using stack 
**else part
*/
